#include <iostream>

using namespace std;

int main() {
	bool var = true;
	bool var1 = false;
	bool var2 = true;
	// Boolean = True || False
	
	if (var) {
		cout << "The condition is true" << endl;
	}

	else if (var2) {
		cout << "This condition is also true" << endl;
	}

	else {
		cout << "This is the else condition" << endl;
	}

	int num = 22;

	if (num == 110) {
		cout << "This statement will not run." << endl;
	}

	else if ( num > 1) {
		cout << "This statement will run" << endl;
	}

	else {
		cout << "This statement is also true, but won't run" << endl;
	}

	return 0;
}
