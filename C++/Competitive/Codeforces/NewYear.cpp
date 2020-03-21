#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int t; cin >> t;

	while(t--){
		int m, n; cin >> m >> n;
		int A[m][n];
		
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				cin >> A[i][j];

		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++) cout << A[i][j] << " ";
			cout << endl;
		}
	}

	return 0;
}
