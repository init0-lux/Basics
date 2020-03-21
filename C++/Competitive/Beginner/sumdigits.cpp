#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	long N;
	
	cin >> T;
	while(T>0){
		long sum=0;
		cin >> N;
		while(N > 0) {
			sum += N%10;
			N/=10;
		}
		cout << sum << "\n";
		--T;
	}
	
	return 0;
}
