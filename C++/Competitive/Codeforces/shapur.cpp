#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	string a, b, ret="";
	cin >> a >> b;

	for(int i = 0; i < a.size(); i++){
		if(a[i] == b[i]) ret.push_back('0');
		else ret.push_back('1');
	}

	cout << ret << endl;

	return 0;
}
