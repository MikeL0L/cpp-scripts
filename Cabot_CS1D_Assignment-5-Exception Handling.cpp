#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

// Function to convert a hex string to decimal
int hex2Dec(const string& hexString) {
    try {
        istringstream iss(hexString);
        int decimalValue;
        iss >> hex >> decimalValue;

        if (iss.fail()) {
            throw invalid_argument("Not a valid hex number");
        }

        return decimalValue;
    } catch (const invalid_argument& e) {
        throw;
    }
}

int main() {
    try {
        string input;
        cout << "Enter a hex number: ";
        cin >> input;

        int decimalValue = hex2Dec(input);
        cout << "Decimal equivalent: " << decimalValue << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

