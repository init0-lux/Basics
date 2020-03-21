#include<bits/stdc++.h>
using namespace std;

int main() {
	int N, W, L, a[2];
	cin >> N;
	a[0]=0;
	a[1]=0;

	while(N>0){
		int S, T;
		cin >> S >> T;

		if(S > T && S-T > a[1]){
			a[0] = 1;
			a[1] = S - T;
		}
		else if(T > S && T - S > a[1]){
			a[0] = 2;
			a[1] = T - S;
		}

		--N;
	}

	cout << a[0] << " " << a[1] << endl;
	
	return 0;
}
