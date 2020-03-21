#include<iostream>

using namespace std;

int main() {
	int num;
	char ch = 'A';

	cout << "Enter no. of rows: ";
	cin >> num;

	for (int i = 1; i <= num; i++ ){
		
		for (int j = num; j >= i; j-- )
			cout << " ";
	
		for (int k=1; k <= i; k++ )
			cout << ch++;
		ch--;

		for (int m = 1; m < i; m++)
			cout << --ch;

		cout << endl;
		ch = 'A';
	}

	return 0;
}
