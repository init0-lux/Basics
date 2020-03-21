#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int t; cin >> t;

	for(int i = 0; i < t; i++){
		int n;
		cin >> n;
		int a[n];

		for(int i = 0; i < n; i++) cin >> a[n];

		int cnt = 1;
		for(int i = 1; i < n; i ++){
			if( abs(a[i]-a[i-1]) == abs(a[i+1]-a[i]) ) cnt++;
			else continue;
		}

		cout << "Case #" << i+1 << ": " << cnt << endl;
	}

	return 0;
}
