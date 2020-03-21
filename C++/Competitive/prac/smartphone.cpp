#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	ll N, ans=0;
	cin >> N;
	ll a[N];

	for(ll i = 0; i < N; i++)
		cin >> a[i];

	sort( a, a+N );

	for(int i = 0; i < N; i++)
		ans = max( ans, a[i] * (N - i) );

	cout << ans << endl;

	return 0;
}
