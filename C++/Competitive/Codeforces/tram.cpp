#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n;
	cin >> n;
	int A[n][2], maxx=0, curr = 0;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < 2; j++)
			cin >> A[i][j];

	for(int i = 0; i < n; i++){
		curr = curr - A[i][0] + A[i][1];
		maxx=max(curr, maxx);
	}
	
	cout << maxx << endl;

	return 0;
}
