#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int a, b, cnt = 0, cnt1 = 0;
	cin >> a >> b;

	if(a==b) cnt = a;

	else{
		cnt = min(a, b);
		cnt1 = (max(a, b) - cnt)/2;
	}

	cout << cnt << " " << cnt1 << endl;

	return 0;
}
