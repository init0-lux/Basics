#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// Output to file from ofstream
	// file path goes in ();
	ofstream out("etc/names.txt");

	// Checks if file isn't there
	if ( !out ) {
		cout << "The file could not be found. " << endl;
		return -5; // this shows an error;
	}

	string name = "Zach";
	
	// writes name to file;
	out << name;

	return 0;
}
