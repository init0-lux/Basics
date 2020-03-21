#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n; cin >> n;

	while(n--){
		string a;
		cin >> a;

		if(a.size() > 10){
			string ret;
	
			ret += a[0];
			ret += to_string(a.size()-2);
			ret += a[ a.size()-1 ];

			cout << ret << endl;
		}
		else cout << a << endl;
	}

	return 0;
}
