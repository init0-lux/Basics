#include<bits/stdc++.h>
using namespace std;

int main() {
	int T, A[]={1,2,5,10,50,100};
	cin >> T;

	for(int i = 0; i < T; i++){
		int  count = 0, N, j = 5;
		cin >> N;

		while(N>0){
			if(A[j] <= N){
				N = N - A[j];
				count++;
			}
			else j--;
		}

		cout << count << endl;
	}
		
	return 0;
}
