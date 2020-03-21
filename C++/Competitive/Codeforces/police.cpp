#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define fast() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
	fast();

	int t, pol=0, cnt=0;

	cin >> t;

	while(t--){
		int temp; 
		cin >> temp;

		if (temp == -1 and pol == 0) ++cnt;
		else if ( temp == -1 and pol > 0 ) --pol;
		else pol+=temp;
	}
	cout << cnt << endl;

	return 0;
}
