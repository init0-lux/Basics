#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	string a, b, c;
	cin >> a >> b >> c;
	string ret = a+b;

	sort(c.begin(), c.end());
	sort(ret.begin(), ret.end());

	cout << ( (ret == c)?"YES":"NO" ) << endl;

	return 0;
}
