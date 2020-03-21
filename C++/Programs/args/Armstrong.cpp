#include<iostream>

using namespace std;

bool IsArmstrong( int );

int main( int argc, char** args) {
	if ( argc < 2 )
		cout << "usage: " << args[0] << " <number(s)>" << endl;
	else
		for (int i = 1; i < argc; i++) {
			if ( IsArmstrong( atoi(args[i]) ) )
				cout << args[i] << " is an Armstrong number." << endl;
			else
				cout << args[i] << " is not an Armstrong number." << endl;
		}
	
	return 0;
}

bool IsArmstrong( int a ) {
	int original, digit, sum = 0;
	original = a;

	while (a>0) {
		digit = a % 10;
		sum += (digit * digit * digit);
		a /= 10;
	}

	if (sum == original)
		return true;
	else
		return false;
}
