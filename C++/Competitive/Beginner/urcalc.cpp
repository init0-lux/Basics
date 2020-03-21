#include<bits/stdc++.h>
using namespace std;

int main() {
	float A, B;
	char C;

	float ret;

	cin >> A >> B >> C;

	if(C=='+')
		cout << (int)A+B << endl;
	else if(C=='-')
		cout << (int)A-B << endl;
	else if(C=='*')
		cout << (int)A*B << endl;
	else{
		ret = A/B;
		cout << fixed << setprecision(1) << ret << endl;
	}

	return 0;
}
