#include<iostream>

using namespace std;

uint64_t Factorial( int );

int main( int argc, char** args) {
	if ( argc < 2 )
		cout << "usage: " << args[0] << " <number(s)" << endl;
	else
		for ( int i = 1; i < argc; i++ ) {
			cout << "Factorial of " << args[i] << " is " << Factorial( atoi( args[i] ) ) << endl;
		}
	
	return 0;
}

uint64_t Factorial( int a ) {
	uint64_t sum = 1;
	if ( a < sum+1 )
		return sum;
	else {
		for ( int i = 1; i <= a; i++ ) 
			sum *= i;
	}

	return sum;
}
