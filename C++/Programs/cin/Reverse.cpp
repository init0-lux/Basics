#include <iostream>

using namespace std;

int Reverse(int);

int main() {
	int num;

	cout << "Enter the number: ";
	cin >> num;

	cout << "Reverse = " << Reverse(num) << endl;
}

int Reverse(int num) {
	int retVal = 0, temp;
	temp = num;

	while (temp > 0) {
		retVal = retVal * 10 + (temp%10);
		temp /= 10;
	}

	return retVal;
}
