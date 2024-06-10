#include <iostream>
using namespace std;

void Binary(int num) {
    string binary = "";
    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    cout << "Decimal converted to Binary is: " << binary << endl;
}
	
int main() {
    while (true) {
        int num;
        cout << "Enter a Number: ";
        cin >> num;
        Binary(num);
    }

    return 0;    
}

