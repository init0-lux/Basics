#include<bits/stdc++.h>
using namespace std;

int main() {
	long long T;
	cin >> T;

	while(T--){
		long long C, D, L, mini, maxi;
		cin >> C >> D >> L;

		maxi = D*4 + C*4;
		mini = (C>=D*2)?(D*4+((C-2*D)*4)):D*4;

		if(L >= mini && L <= maxi && L%4==0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}
