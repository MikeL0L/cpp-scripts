#include <iostream>
using namespace std;

void Addition() {
    int num1;
    int num2;
    cout << "Enter First Integer: ";
    cin >> num1;
    cout << "Enter Second Integer: ";
    cin >> num2;
    int addition = num1 + num2;
    cout << num1 << " + " << num2 << " = " << addition << endl;
}
void Subtraction() {
    int num1;
    int num2;
    cout << "Enter First Integer: ";
    cin >> num1;
    cout << "Enter Second Integer: ";
    cin >> num2;
    int subtraction = num1 - num2;
    cout << num1 << " - " << num2 << " = " << subtraction << endl;
}
void Multiplication() {
    int num1;
    int num2;
    cout << "Enter First Integer: ";
    cin >> num1;
    cout << "Enter Second Integer: ";
    cin >> num2;
    int multiplication = num1 * num2;
    cout << num1 << " * " << num2 << " = " << multiplication << endl;
}
void Division() {
    int num1;
    int num2;
    cout << "Enter First Integer: ";
    cin >> num1;
    cout << "Enter Second Integer: ";
    cin >> num2;
    int division = num1 / num2;
    cout << num1 << " / " << num2 << " = " << division << endl;
}

int main() {
    while (true) {
       int choice;
       int cont;
       
       cout << "C++ Calculator (By: Belongilot, Cabot, Pellecer)" << endl;
       cout << "1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division" << endl;
       cout << "Enter choice: ";
       cin >> choice;
       
       if (choice == 1) {
           Addition();
       }
       else if (choice == 2) {
           Subtraction();
       }
       else if (choice == 3) {
           Multiplication();
       }
       else if (choice == 4) {
           Division();
       }
       
       cout << "Do you want to continue? 1 for yes, 0 for no: " << endl;
       cin >> cont;
       if (cont == 0) {
           break;
       }
    }

return 0;
}