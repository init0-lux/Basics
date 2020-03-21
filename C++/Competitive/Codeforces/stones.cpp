#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n;
	string s;
	cin >> n >> s;
	int pairs=0;

	for(int i = 0; i < n-1; i++){
		if(s[i] == s[i+1]) pairs++;
	}

	cout << pairs << endl;

	return 0;
}
