#include<iostream>

using namespace std;

bool IsPrime( int );

int main( int argc, char** args ) {
	if ( argc < 2 )
		cout << "usage: " << args[0] << " <number(s)>" << endl;

	else
		for ( int i = 1; i < argc; i++ ) {
			if ( IsPrime( atoi( args[i] ) ) )
				cout << args[i] << " is a prime number." << endl;
			else
				cout << args[i] << " is not a prime number." << endl;
		}

	return 0;
}

bool IsPrime( int num ) {
	int factors = 0;

	for ( int i = 1; i < num; i++ ){
		if ( num % i == 0 )
			factors++;
	}

	if ( factors < 2 )
		return true;
	else
		return false;
}
