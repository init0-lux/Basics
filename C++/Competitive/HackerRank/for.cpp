#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int a, b;
	cin >> a >> b;

	for(;a<=b;a++){
		if(a<10){
			switch(a){
				case 1: cout << "one" << endl; break;
				case 2: cout << "two" << endl; break;
				case 3: cout << "three" << endl; break;
				case 4: cout << "four" << endl; break;
				case 5: cout << "five" << endl; break;
				case 6: cout << "six" << endl; break;
				case 7: cout << "seven" << endl; break;
				case 8: cout << "eight" << endl; break;
				case 9: cout << "nine" << endl; break;
			}
		}
		else{
			if(a%2==0) cout << "even" << endl;
			else cout << "odd" << endl;
		}
	}

	return 0;
}
