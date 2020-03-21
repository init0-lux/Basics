#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int T; cin >> T;
	string ret = "EASY";
	while(T--){
		int a; cin >> a;
		if(a == 1){
			ret = "HARD";
			break;
		}
	}

	cout << ret << endl;
	
	return 0;
}
