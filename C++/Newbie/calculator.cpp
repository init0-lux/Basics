#include <iostream>

using namespace std;

int main() {
	int choice;
	double n1, n2;

	cout << "1. Addition " << endl;
	cout << "2. Subtraction"<< endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << endl << endl << "Enter a choice: ";
	cin >> choice;

	cout << "Enter num 1: ";
	cin >> n1;
	cout << "Enter num 2: ";
	cin >> n2;

	switch( choice ) {
		case 1:
			cout << n1 + n2 << endl;
			break;
		case 2:
			cout << n1 - n2 << endl;
			break;
		case 3:
			cout << n1 * n2 << endl;
			break;
		case 4:
			cout << n1 / n2 << endl;
			break;
		default: 
			cout << "You entered an Invalid number. \n Exiting..." << endl;
			break;
	}

	return 0;
}
