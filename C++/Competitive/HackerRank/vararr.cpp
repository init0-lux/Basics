#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, q; cin >> n >> q;
	vector<int> A[n];

	for(int i = 0; i < n; i++){
		int len; cin >> len;
		for(int j = 0; j < len; j++){
			int temp; cin >> temp;
			A[i].push_back(temp);
		}
	}

	for(int i = 0; i < q; i++){
		int a, b; cin >> a >> b;

		cout << A[a][b] << endl;
	}	

	return 0;
}
