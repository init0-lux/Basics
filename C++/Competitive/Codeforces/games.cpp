#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, cnt = 0; 
	cin >> n;

	int a[n], h[n];

	for(int i = 0; i < n; i++) cin >> h[i] >> a[i];

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if( a[i] == h[j] )
				++cnt;

	cout << cnt << endl;
	return 0;
}
