#include <iostream>
using namespace std;

int main () {
	
	int num;
	
	cout << "Enter a Number: ";
	cin >> num;
	
	int samenum = 1;
	
	for (int i = 1; i <= num; i++) {

        for (int j = 1; j <= i; j++) {
            cout << samenum << " ";
            samenum++;
        }

        cout << endl;
    }

return 0;
}
