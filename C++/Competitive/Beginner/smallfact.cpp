#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	while(T>0){
		long long N, sum=1;
		cin >> N;
		
		for(int i = 1; i <= N; i++)
			sum *= i;

		cout << sum << endl;

		--T;
	}
	
	return 0;
}
