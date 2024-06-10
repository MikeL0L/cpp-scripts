#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <memory>
#include <stdexcept>
using namespace std;

// Base class Product with virtual destructor for polymorphism
class Product {
private:
    int id;
    string name;
    string category;
    double price;
    int quantity;

public:
    Product(int id, string name, string category, double price, int quantity)
        : id(id), name(name), category(category), price(price), quantity(quantity) {}

    // Virtual destructor
    virtual ~Product() {}

    // Getters and setters
    int getId() const { return id; }
    void setId(int id) { this->id = id; }
    string getName() const { return name; }
    void setName(string name) { this->name = name; }
    string getCategory() const { return category; }
    void setCategory(string category) { this->category = category; }
    double getPrice() const { return price; }
    void setPrice(double price) { this->price = price; }
    int getQuantity() const { return quantity; }
    void setQuantity(int quantity) { this->quantity = quantity; }

    // Overloading << operator for custom output
    friend ostream& operator<<(ostream& os, const Product& product) {
        os << "ID: " << product.id << ", Name: " << product.name << ", Category: " << product.category << ", Price: $" << product.price << ", Quantity: " << product.quantity;
        return os;
    }

    // Virtual function for price calculation (polymorphism)
    virtual double calculateTotalPrice() const {
        return price * quantity;
    }
};

// Derived class for DiscountedProduct
class DiscountedProduct : public Product {
private:
    double discount;

public:
    DiscountedProduct(int id, string name, string category, double price, int quantity, double discount)
        : Product(id, name, category, price, quantity), discount(discount) {}

    // Overridden function for price calculation
    double calculateTotalPrice() const override {
        return getPrice() * getQuantity() * (1 - discount);
    }

    // Overloading << operator for custom output
    friend ostream& operator<<(ostream& os, const DiscountedProduct& product) {
        os << static_cast<const Product&>(product) << ", Discount: " << product.discount * 100 << "%";
        return os;
    }
};

class Inventory {
private:
    vector<shared_ptr<Product>> products;

public:
    void addProduct(shared_ptr<Product> product) {
        products.push_back(product);
    }

    void removeProduct(int id) {
        auto it = find_if(products.begin(), products.end(), [id](shared_ptr<Product> p) { return p->getId() == id; });
        if (it != products.end()) {
            products.erase(it);
            cout << "Product removed successfully." << endl;
        } else {
            cout << "Product with ID " << id << " not found." << endl;
        }
    }

    void printProducts() const {
        cout << "Inventory: " << endl;
        for (const auto& product : products) {
            cout << *product << endl;
        }
    }

    void saveToFile(const string& filename) const {
        ofstream file(filename);
        if (file.is_open()) {
            for (const auto& product : products) {
                file << product->getId() << "," << product->getName() << "," << product->getCategory() << "," << product->getPrice() << "," << product->getQuantity() << endl;
            }
            cout << "Inventory saved to file." << endl;
        } else {
            cout << "Unable to open file for saving." << endl;
        }
    }

    void loadFromFile(const string& filename) {
        ifstream file(filename);
        if (file.is_open()) {
            products.clear(); // Clear existing products before loading from file
            string line;
            while (getline(file, line)) {
                stringstream ss(line);
                string idStr, name, category, priceStr, quantityStr;
                getline(ss, idStr, ',');
                getline(ss, name, ',');
                getline(ss, category, ',');
                getline(ss, priceStr, ',');
                getline(ss, quantityStr, ',');

                int id = stoi(idStr);
                double price = stod(priceStr);
                int quantity = stoi(quantityStr);

                shared_ptr<Product> p = make_shared<Product>(id, name, category, price, quantity);
                products.push_back(p);
            }
            cout << "Inventory loaded from file." << endl;
        } else {
            cout << "Unable to open file for loading." << endl;
        }
    }

    // Recursive function to calculate the total value of the inventory
    double calculateTotalInventoryValue() const {
        return calculateTotalInventoryValueRecursive(0);
    }

private:
    double calculateTotalInventoryValueRecursive(size_t index) const {
        if (index >= products.size()) return 0.0;
        return products[index]->calculateTotalPrice() + calculateTotalInventoryValueRecursive(index + 1);
    }
};

int main() {
    Inventory inventory;

    char choice;
    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. Add Discounted Product\n";
        cout << "3. Remove Product\n";
        cout << "4. Print Products\n";
        cout << "5. Save Inventory to File\n";
        cout << "6. Load Inventory from File\n";
        cout << "7. Calculate Total Inventory Value\n";
        cout << "Q. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        try {
            switch (choice) {
                case '1': {
                    int id, quantity;
                    string name, category;
                    double price;
                    cout << "Enter product ID: ";
                    cin >> id;
                    cout << "Enter product name: ";
                    cin >> name;
                    cout << "Enter product category: ";
                    cin >> category;
                    cout << "Enter product price: ";
                    cin >> price;
                    cout << "Enter product quantity: ";
                    cin >> quantity;
                    inventory.addProduct(make_shared<Product>(id, name, category, price, quantity));
                    break;
                }
                case '2': {
                    int id, quantity;
                    string name, category;
                    double price, discount;
                    cout << "Enter product ID: ";
                    cin >> id;
                    cout << "Enter product name: ";
                    cin >> name;
                    cout << "Enter product category: ";
                    cin >> category;
                    cout << "Enter product price: ";
                    cin >> price;
                    cout << "Enter product quantity: ";
                    cin >> quantity;
                    cout << "Enter product discount (as a decimal): ";
                    cin >> discount;
                    inventory.addProduct(make_shared<DiscountedProduct>(id, name, category, price, quantity, discount));
                    break;
                }
                case '3': {
                    int id;
                    cout << "Enter product ID to remove: ";
                    cin >> id;
                    inventory.removeProduct(id);
                    break;
                }
                case '4':
                    inventory.printProducts();
                    break;
                case '5':
                    inventory.saveToFile("inventory.txt");
                    break;
                case '6':
                    inventory.loadFromFile("inventory.txt");
                    break;
                case '7':
                    cout << "Total Inventory Value: $" << inventory.calculateTotalInventoryValue() << endl;
                    break;
                case 'q':
                case 'Q':
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please enter again." << endl;
            }
        } catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
    } while (choice != 'q' && choice != 'Q');

    return 0;
}
