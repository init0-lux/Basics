#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, a = 0, d = 0;
	string s;
	cin >> n >> s;

	for(int i = 0; i < s.size(); i++){
		switch(s[i]){
			case 'A': ++a; break;
			case 'D': ++d; break;
		}
	}

	cout << ( (a>=d)? ((a>d)?"Anton":"Friendship") : "Danik" ) << endl;

	return 0;
}
