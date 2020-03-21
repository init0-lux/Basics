#include<bits/stdc++.h>
using namespace std;

int main() {
	int N, res;
	cin >> N;
	
	res = (N%4==0) ? ++N : --N;

	cout << res << endl;

	return 0;
}
