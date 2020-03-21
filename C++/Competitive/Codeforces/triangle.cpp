#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, sum=0; cin >> n;
	
	while(n--){
		int a, b, c;
		cin >> a >> b >> c;
		if(a+b+c >= 2) sum++;
	}

	cout << sum << endl;

	return 0;
}
