#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, groups = 0;
	cin >> n;
	string a[n];

	for(int i = 0; i < n; i++) cin >> a[i];

	for(int i = 1; i < n; i++)
		if(a[i] != a[i-1]) ++groups;
	
	cout << groups+1 << endl;

	return 0;
}
