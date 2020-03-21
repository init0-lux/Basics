#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n;
	cin >> n;
	int a[n];
	
	for(int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a+n);
	
	int N, mid;
	cin >> N;

	mid = (n%2==0) ? n/2 : (n+1)/2;

	if(N == a[mid] )
		cout << "True" << endl;

	else if( N < a[mid] ){
		for(int i = 0; i < mid; i++ ){
			if( a[i] == N )
				cout << "True" << endl;
		}
	}

	else if (N > a[mid]){
		for(int i = mid; i < n; i++){
			if(a[i] == N)
				cout << "True" << endl;
		}
	}

	else cout << "False" << endl;
	return 0;
}
