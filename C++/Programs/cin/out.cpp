#include<iostream>
#include<fstream>
using namespace std;

int main() {
	int num;
	char ch = 'A', fo='Y';

	cout << "File output [Y/n]:";
	cin >> fo;

	if (fo == 'Y'){

		cout << "Enter no. of rows: ";
		cin >> num;

		if (num > 500){
			cout << "Enter a number below 500.";
			exit;
		}

		ofstream out("Fileout");

		for (int i = 1; i <= num; i++ ){
			
			for (int j = num; j >= i; j-- )
				out << " ";
		
			for (int k=1; k <= i; k++ )
				out << ch++;
			ch--;

			for (int m = 1; m < i; m++)
				out << --ch;

			out << endl;
			ch = 'A';
		}
	}
	else if (fo == 'N' || fo == 'n')
		exit(9);
	else
		cout << "Enter Y or N" << endl;

	return 0;
}
