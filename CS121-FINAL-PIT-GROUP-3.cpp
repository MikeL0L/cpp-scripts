#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Objects and Classes 
class Item {
public:
    string name;
    double price;

    Item(const string& itemName, double itemPrice)
        : name(itemName), price(itemPrice) {}

    // Overload << operator for custom output (Operator Overloading)
    friend ostream& operator<<(ostream& os, const Item& item) {
        os << item.name << " ($" << item.price << ")";
        return os;
    }
};

class Inventory {
private:
    vector<Item> items;

public:
    void AddItem(const Item& item) {
        items.push_back(item);
    }

    void PrintInventory() {
        for (const auto& item : items) {
            cout << item << endl;
        }
    }

    // Load items from a file
    void LoadFromFile(const string& filename) {
        ifstream infile(filename);
        if (infile) {
            string itemName;
            double itemPrice;
            while (infile >> itemName >> itemPrice) {
                AddItem(Item(itemName, itemPrice));
            }
            infile.close();
        }
    }

    // Save inventory to a file
    void SaveToFile(const string& filename) {
        ofstream outfile(filename);
        if (outfile) {
            for (const auto& item : items) {
                outfile << item.name << " " << item.price << endl;
            }
            outfile.close();
        }
    }
};

int main() {
    Inventory inventory;

    // Load initial items from a file 
    inventory.LoadFromFile("inventory.txt");

    cout << "Inventory Items:" << endl;
    inventory.PrintInventory();

    inventory.SaveToFile("inventory.txt");

    return 0;
}

