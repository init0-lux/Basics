#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int A[a][b], B[b][c];

	for(int i = 0; i<a; i++){
		for(int j = 0; j < b; j++)
			cin >> A[i][j];
	}

	for(int i = 0; i<b; i++){
		for(int j = 0; j < c; j++)
			cin >> B[i][j];
	}

	int ans[a][c];

	for(int i = 0; i < a; i++){
		for(int j = 0; j < c; j++)
			ans[i][j] = 0;
	}

	for(int i = 0; i<a; i++){
		for(int j = 0; j<c; j++){
			for(int k = 0; k < b; k++)
				ans[i][j] += A[i][k] * B[k][j];
		}
	}

	for(int i = 0; i < a; i++){
		for(int j = 0; j < c; j++)
			cout << ans[i][j] << " ";
		cout << endl;
	}


	return 0;
}
