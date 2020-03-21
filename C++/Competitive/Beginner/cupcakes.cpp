#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	while(T--){
		long N, maxnum=0;
		cin >> N;
		
		for(int i = 1; i < N; i++){
			if(N%i>maxnum)
				maxnum = i;
		}
		
		cout << maxnum << endl;
	}
	
	return 0;
}
