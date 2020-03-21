#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int t;
	cin >> t;
	
	while(t--){
		int a, b;
		cin >> a >> b;
		
		if(a%b==0) cout << 0 << endl;
		else cout << ( (a<b)?b-a:b-(a%b) ) << endl;
	}

	return 0;
}
