#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	while(T>0){
		char A, B, C, a, b;
		cin >> A >> B >> C;
		cin >> a >> b;

		if(A == a||A==b)
			cout << A << endl;
		else if(B==a || B==b)
			cout << B << endl;
		else
			cout << C << endl;

		--T;
	}
	
	return 0;
}
