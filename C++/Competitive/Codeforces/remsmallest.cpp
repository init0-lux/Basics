#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define fast() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
	fast();
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<int> A(n);
	
		for(auto &i : A) cin >> i;
		sort(A.begin(), A.end());

		bool flag = 1;

		for( int i = 1; i < A.size(); i++ ) flag &= ( A[i] - A[i-1] <= 1 );
		cout << ( (flag)?"YES":"NO" ) << endl;
	}

	return 0;
}
