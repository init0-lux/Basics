#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int t; cin >> t;

	for(int j = 0; j < t; j++){
		int n; string s;
		cin >> n >> s;

		int c = 1; 

		cout << "Case #" << j+1 << ": " << c << " ";
		for(int i = 1; i < n; i++){
			if(s[i] > s[i-1]) c++;
			else c=1;

			cout << c << " ";
		}

		cout << endl;
	}

	return 0;
}
