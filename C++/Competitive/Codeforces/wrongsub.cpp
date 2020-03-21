#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, k;
	cin >> n >> k;

	while(k--){
		if(n%10==0) n/=10;
		else n-=1;
	}

	cout << n << endl;
	return 0;
}
