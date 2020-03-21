#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	while(T--){
		string N, tmp;

		cin >> N;
		tmp = N;
		reverse(N.begin(), N.end());

		cout << ( (tmp == N)?"wins":"loses" ) << endl;
	}

	return 0;
}
