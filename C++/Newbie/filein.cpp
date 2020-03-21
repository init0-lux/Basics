#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// Since we know the number of lines/vars in the file
	// we'll use const int with string;
	// later on, vectors
	const int SIZE = 10;
	string names [SIZE] = {};
	string temp_name;

	ifstream in("etc/name.in");
	
	// Checks for file
	if ( !in ) {
		cout << "File not found. " << endl;
		return -5;
	}
	
	// best way to do is pre-read and post-read with while loop
	// without, You might read last name twice
	// or you might just leave the first name
	
	// pre-read
	in>> temp_name;
	int i = 0;
	
	getline( in, temp_name );
	while ( !in.eof() ) {
		names[ i ] = temp_name;
		i++;

		// in>> temp_name;
		getline( in, temp_name);
	}

	for ( int i = 0; i < SIZE; i++) {
		cout << names[ i ] << endl;
	}

	return 0;
}
