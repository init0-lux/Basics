#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T>0){
		int A[3];
		cin >> A[0] >> A[1] >> A[2];

		sort(A, A+3);
		cout << A[1] << endl;

		--T;
	}
	
	return 0;
}
