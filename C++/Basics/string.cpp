#include <iostream>

using namespace std;

int main() {
	string test = "HelloWorld";

	cout << test.length()   << endl;
	cout << test.size()     << endl;
	cout << test.find ('W') << endl;
	cout << test.find ('o') << endl;
	cout << test.find ('3') << endl;

	return 0;
}
