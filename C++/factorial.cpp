#include <iostream>

using namespace std;

uint64_t factorial( int num ) {
	//unsigned long long int sum = 1;
	uint64_t sum=1;
	for ( int i = 1; i <= num; i++ ) {
		sum *= i;
	}

	return sum;
}

int main() {

	uint64_t num;

	cout << "Enter the number: ";
	cin >> num;

	cout << factorial( num ) << endl;

	return 0;
}
