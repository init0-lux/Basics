#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n; cin >> n;
	int ret = 0;

	while(n--){
		string op; cin >> op;

		if( op[1] == '+' ) ret+=1;
		else ret-=1;
	}

	cout << ret << endl;
	return 0;
}
