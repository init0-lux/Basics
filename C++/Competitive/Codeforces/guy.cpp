#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, p, q;
	cin >> n >> p;

	int a[p];
	for(int i = 0; i < p; i++) cin >> a[i];
	cin >> q;
	int b[q];
	for(int i = 0; i < q; i++) cin >> b[i];

	vector <int> z;
	for(auto i : a) z.push_back(i);
	for(auto i : b) z.push_back(i);

	sort(z.begin(), z.end());

	for(int i = 0; i < z.size()-1; i++) 
		if(z[i] == z[i+1])
			z.erase( z.begin() + i );

	if(z.size() == n)
		cout << "I become the guy" << endl;
	else
		cout << "Oh, my keyboard!" << endl;

	return 0;
}
