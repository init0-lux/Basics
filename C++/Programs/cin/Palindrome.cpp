#include<iostream>

using namespace std;

bool IsPalindrome(int, int);

int main() {
	int no, orig;

	cout << "Enter the number: ";
	cin >> no;

	orig = no;

	if ( IsPalindrome(no, orig) )
		cout << orig << " is a palindrome" << endl;
	else
		cout << orig << " is not a palindrom" << endl;

	return 0;
}

bool IsPalindrome(int no, int orig) {
	int d, sum = 0;
	while ( no > 0 ) {
		d = no % 10;
		sum = sum * 10 + d;
		no /= 10;
	}
	
	if ( sum == orig )
		return true;
	else
		return false;
}
