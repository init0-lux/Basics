#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int a; cin >> a;
	string b;
	
	switch(a){
		case 1: b = "one"; break;
		case 2: b = "two"; break;
		case 3: b = "three"; break;
		case 4: b = "four"; break;
		case 5: b = "five"; break;
		case 6: b = "six"; break;
		case 7: b = "seven"; break;
		case 8: b = "eight"; break;
		case 9: b = "nine"; break;
		default: b = "Greater than 9";
	}

	cout << b << endl;

	return 0;
}
