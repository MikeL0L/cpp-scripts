#include <iostream>
using namespace std;

int main() {
    int Number_Array[10];
    
    cout << "Enter 10 Integers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> Number_Array[i];
    }
    
    cout << "Array : ";
    for (int i = 0; i < 10; ++i) {
        cout << Number_Array[i] << " ";
    }
    
    return 0;
}

