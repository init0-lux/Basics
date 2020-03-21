#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int T;
	cin >> T;

	while(T--){
		int c, cnt = 0;
		cin >> c;

		if(c <= 2) cout << 0 << endl;
		else{
			int a = c-1, b = 1;
			while(a > b){
				++b;
				--a;
				++cnt;
			}
			cout << cnt << endl;
		}
	}
	return 0;
}
