#include <iostream>

using namespace std;

void Fibonacci( int );

int main() {
	int n;

	cout << "Enter no. of terms to output: ";
	cin >> n;

	Fibonacci( n );

	return 0;
}

void Fibonacci( int n ) {
	static int n1 = 0, n2 = 1, n3;

	if ( n > 0 ) {
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		cout << n3 << " ";

		Fibonacci( n - 1 );
	}
}
