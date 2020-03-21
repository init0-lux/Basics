#include<iostream>

using namespace std;

bool Palindrome( int );

int main( int argc, char** args) {
	if ( argc < 2 )
		cout << "usage: " << args[0] << " <number(s)>" << endl;
	else {
		for ( int i = 1; i < argc; i++ ) {
			if ( Palindrome( atoi( args[i] ) ) )
				cout << args[i] << " is a Palindrome" << endl;
			else
				cout << args[i] << " is not a Palindrome" << endl;
		}
	}

	return 0;
}

bool Palindrome( int a ) {
	int digit, sum = 0, original;
	original = a;

	while( a > 0 ){
		digit = a % 10;
		sum = sum * 10 + digit;
		a /= 10;
	}

	if (original == sum)
		return true;
	else
		return false;
}
