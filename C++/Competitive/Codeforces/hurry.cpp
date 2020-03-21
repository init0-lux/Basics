#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int t = 4*60, n, k, cnt=0;
	cin >> n >> k;
	t -= k;
	for(int i = 1; i < n+1; i++){
		int l = i*5;
		if (l>t) break;
		else{
			t -= l;
			++cnt;
		}
	}

	cout << cnt << endl;

	return 0;
}
