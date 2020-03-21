#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n, k;	
	
	cin >> n >> k;

	int sum = 0;
	while( n > 0 ){
		long long i;
		cin >> i;
		if(i % k == 0)
			sum += 1;
		--n;
	}

	cout << sum << "\n";
	return 0;
}
