#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define fast() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
	fast();
	int n;
	cin >> n;
	int A[n];

	for(int i = 0; i < n; i++) cin >> A[i];

	int mini, maxi; // Min index, max index;
	int minn = INT_MAX, maxx = INT_MIN;

	for(int i = 0; i < n; i++)
		if( A[i] <= minn ){
			minn = A[i];
			mini = i;
		}

	for(int i = n-1; i >= 0; i--)
		if(A[i] >= maxx){
			maxx = A[i];
			maxi = i;
		}

	cout << ( (maxi <= mini) ? (maxi == mini)?0:maxi + n-mini-1 : maxi + n - mini - 2  ) << endl;

	return 0;
}
