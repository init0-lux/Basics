#include <iostream>

using namespace std;

void print_age( int age );
void print_age2( int & );

int main() {
	int age = 7;

	print_age( age );
	cout << "Current Value of $age: " <<  age << endl << endl;

	print_age2( age );
	cout << "New Value of $age: " << age << endl;
	
	return 0;
}

// if you change the value of int x in the program, it only changes value of original value
// using & refers to the memory location of the data
// therefore, any changes made to & will result in change in the variable
void print_age( int x ) {
	x = 4;
	cout << "print_age func: " << x << endl;
}

void print_age2 ( int &age2 ) {
	age2 = 229900;
	cout << "print age2 func: " <<  age2 << endl;
}
