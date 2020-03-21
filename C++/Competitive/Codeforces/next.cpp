#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, k, cnt=0;
	cin >> n >> k;

	int A[n];
	for(int i = 0; i < n; i++) cin >> A[i];

	for(int i = 0; i < n; i++)
		if(A[i] >= A[k-1] && A[i] > 0) ++cnt; 
	cout << cnt << endl;	

	return 0;
}
