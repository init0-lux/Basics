#include <iostream>

using namespace std;

int main() {
	// String isn't a data type, it's a class
	// With every instance of string, there's functions related to it.
	string name = "init0";
	
	cout << name.size() << endl;	// size of string
	cout << name.length() << endl;	// length of string

	cout << name.find_last_of('i') << endl;	// find last occurence of given char
	
	cout << name.append("aa") << endl;	// append to last of string
	cout << name.insert( 0, "a" ) << endl;	// insert string to given position. "string" not char;
	
	return 0;
}
