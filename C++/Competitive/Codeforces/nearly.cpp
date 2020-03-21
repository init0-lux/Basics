#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	string s;
	cin >> s;
	int num=0;

	for(int i = 0; i < s.size(); i++)
		if(s[i] == '4' or s[i] == '7')
			++num;

	cout << ( (num == 4 or num == 7) ? "YES" : "NO" ) << endl;

	return 0;
}
