#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int t, minn, maxx, ama=0;
	cin >> t;
	int a[t];

	for(int i = 0; i < t; i++) cin >> a[i];

	minn = a[0];
	maxx = a[0];
	
	for( auto i : a ){
		if(minn > i){
			++ama;
			minn = i;
		}

		else if(maxx < i){
			++ama;
			maxx = i;
		}
	}

	cout << ama << endl;

	return 0;
}
