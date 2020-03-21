#include<bits/stdc++.h>
using namespace std;

unsigned long long factorial(int num) {
	unsigned long long ret=1;

	for(int i = 1; i <= num; i++ )
		ret *= i;

	return ret;
}

int main() {
	int t;
	cin >> t;
	
	while(t>0){
		int num;
		cin >> num;

		cout << factorial(num) << endl;

		--t;
	}
	
	return 0;
}
