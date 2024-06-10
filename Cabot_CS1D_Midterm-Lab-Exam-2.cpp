#include <iostream>
using namespace std;

int main () {
	
	int num;
	int i;
	int product;
	
	cout << "Enter a Number: ";
	cin >> num;
	
	for(i = 1; i <= num; i++){
		
		for(int j =1; j <= 10; j++){
			product = i * j;
			cout << i << " x " << j << " = " << product << endl;
		}
		cout << endl;
	}

return 0;
}
