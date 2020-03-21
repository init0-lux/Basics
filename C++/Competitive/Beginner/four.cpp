#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	while(T>0){
		long num;
		cin >> num;
		int sum = 0;
		while (num > 0){
			if(num%10==4)
				++sum;
			num/=10;
		}

		cout << sum << endl;
		--T;
	}
	
	return 0;
}
