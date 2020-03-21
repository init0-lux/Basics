#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int k, n, w, cost=0;
	cin >> k >> n >> w;

	for(int i = 1; i < w+1; i++) cost+=(i*k);

	cout << ( (cost <= n)? 0 : cost - n ) << endl;

	return 0;
}
