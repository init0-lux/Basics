#include<iostream>

using namespace std;

bool IsPrime(int);

int main() {
	int n;

	cout << "Enter the number: ";
	cin >> n;

	if ( IsPrime(n) )
		cout << "Prime Number" << endl;
	else
		cout << "Not a Prime Number" << endl;
}

bool IsPrime( int n ) {
	int factors = 0;

	for (int i = 1; i <= n; i++) {
		if (n%i==0) {
			factors++;
		}
	}

	if (factors == 2)
		return true;
	else
		return false;
}
