#include<iostream>

using namespace std;

uint64_t Factorial( int );
uint64_t Loop( int );

int main() {
	int num;

	cout << "Enter the number: ";
	cin >> num;

	cout << Factorial( num ) << endl;

	return 0;
}

uint64_t Factorial( int num ) {
	if ( num < 0 )
		return -1;
	if ( num == 0 )
		return 1;

	else
		return ( num * Factorial(num -1));
}

uint64_t Loop(int num) {
	uint64_t sum;
	for (int i = 1; i >= num; i++)
		sum *= i;
	return sum;
}
