#include<iostream>

using namespace std;

bool Armstrong(int);

int main() {
	int num;

	cout << "Enter the number: ";
	cin >> num;

	if ( Armstrong(num) )
		cout << num << " is an Armstrong number" << endl;
	else
		cout << num << " is not an Armstrong number" << endl;
}

bool Armstrong(int num) {
	int d, sum = 0, orig;
	
	orig = num;

	while ( num > 0 ) {
		d = num % 10;
		// sum += d*d*d;
		sum = sum + (d*d*d);
		num /= 10;
	}

	if ( sum == orig )
		return true;
	else
		return false;
}
