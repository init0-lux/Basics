#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	double N, ret = 0;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int t; cin >> t;
		ret += t/N;
	}

	cout << ret << endl;

	return 0;
}
