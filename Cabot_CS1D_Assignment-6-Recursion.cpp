#include <iostream>
using namespace std;

// Recursive function to find the GCD
int gcd(int m, int n) {
    if (n != 0)
        return gcd(n, m % n);
    else
        return m;
}

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    // Calculate and display the GCD
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;

    return 0;
}

