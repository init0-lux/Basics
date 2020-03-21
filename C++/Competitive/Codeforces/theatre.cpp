#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	ll n, m, a;
	cin >> n >> m >> a;

	cout << ( ( (n%a==0)?n/a:n/a+1 )  * ( (m%a==0)?m/a:m/a+1 ) ) << endl;

	return 0;
}
