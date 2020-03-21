#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define rep(i, a, b) for(int i = a; i < b; i++)

int main() {
	int k, l, m, n, d, count = 0;
	cin >> k >> l >> m >> n >> d;

	for(int i = 1; i <= d; i++)
		if(i%k==0 or i%l==0 or i%m==0 or i%n==0)
			++count;

	cout << count << endl;
	return 0;
}
