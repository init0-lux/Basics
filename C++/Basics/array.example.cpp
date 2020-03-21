#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
	int data[5] = {1, 2, 3, 4, 5}, input;
	cout << "Enter the number to be known : ";
	cin >> input;
	if ( input >= 0 && input <= 4 )
		cout << "Element = " << data[input];
}
