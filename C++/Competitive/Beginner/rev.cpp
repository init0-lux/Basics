#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T>0){
		long N, rev=0;
		cin >> N;
		while(N>0){
			long rem = N%10;
			rev = rev * 10 + rem;
			N/=10;
		}
		cout << rev << endl;

		--T;
	}
	
	return 0;
}
