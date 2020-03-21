#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

void solve(int *a, int *b){
	int temp = *a;
	*a=(*a)+(*b);
	*b=abs( temp - *b );
}

int main() {
	int a, b; cin >> a >> b;

	solve(&a, &b);

	cout << a << endl << b << endl;
	return 0;
}
