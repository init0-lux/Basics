#include<bits/stdc++.h>
using namespace std;

int main() {
	int N1, N2, ret;
	cin >> N1 >> N2;

	ret = (N1>N2)?N1-N2:N1+N2;
	
	cout << ret << endl;

	return 0;
}
