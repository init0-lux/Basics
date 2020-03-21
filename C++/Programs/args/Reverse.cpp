#include<iostream>

using namespace std;

int Reverse(int);

int main( int argc, char** args ) {
	if ( argc < 2 )
		cout << "usage: " << args[0] << " <number(s)>" << endl;
	else {
		for ( int i = 1; i < argc; i++ )
			cout << args[i] << "\t:\t" << Reverse( atoi(args[i]) ) << endl;
	}

	return 0;
}

int Reverse( int a ) {
	int digit, rev=0;

	while (a > 0) {
		digit = a % 10;
		rev = rev * 10 + digit;
		a /= 10;
	}

	return rev;
}
