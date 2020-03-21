#include <iostream>

using namespace std;

void swap( int &, int & );

int main() {
	int a, b;

	cout << "Enter values of a and b: ";
	cin >> a >> b;

	swap(a, b);

	cout << "new values: a = " << a << endl;
	cout << "\t b = " << b << endl;
}

void swap(int &a, int &b) {
	a = a*b;
	b = a/b;
	a = a/b;
}
