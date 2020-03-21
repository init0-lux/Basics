#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T>0) {
		long N;
		cin >> N;
		int last = N%10, fir;
		while(N>0){
			fir = N;
			N/=10;	
		}

		cout << last + fir << "\n";

		--T;
	}
	
	return 0;
}
