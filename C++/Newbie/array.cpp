#include <iostream>

using namespace std;

int main() {
	// declaring arrays/lists
	// you can't use glist[index], where index is a non-const var.
	
	const int SIZE=3; // you can't change this value later on.
	string glist[ SIZE ] = { "eggs", "milk", "bread"};
	string hlist[ SIZE + 2 ] = {};

	for ( int i = 0; i < SIZE + 2; i++ ) {
		cout << "No " << i << " : ";
		cin >> hlist[i];
	}
 
	cout << endl << endl;

	for ( int i = 0; i < SIZE; i++ ) {
		cout << i << " " << glist[ i ] << endl;
	}	
	
	cout << endl << endl;

	for ( int i = 0; i < SIZE + 2; i++ ) {
		cout << i << " " << hlist[ i ] << endl;
	}

	return 0;
}
