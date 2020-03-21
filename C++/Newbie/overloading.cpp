#include <iostream>

using namespace std;

void salary( int );
void salary( double );
void salary( string );

int main() {
	// Since $input is int, if we enter [1.22] it'll output 1;
	// function overload to support more datatypes;
	string input;
	
	cout << "Enter the salary: ";
	cin >> input;

	salary( input );
	return 0;
}

void salary( int x ) {
	cout << x << endl;
}

void salary( double x ) {
	cout << x << endl;
}

void salary ( string x ) {
	cout << x << endl;
}
