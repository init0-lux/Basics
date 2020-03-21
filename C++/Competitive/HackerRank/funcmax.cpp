#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int solve(int a, int b, int c, int d){
	return max(max(max(a,b),c),d);
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	cout << solve(a, b, c, d) << endl;

	return 0;
}
