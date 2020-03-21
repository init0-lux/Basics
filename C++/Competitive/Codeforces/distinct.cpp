#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	set <char> s;

	while(1){
		char a;
		cin >> a;
		if( a == '}') break;
		
		if( isalpha(a) ) s.insert(a);
	}

	cout << s.size() << endl;

	return 0;
}
