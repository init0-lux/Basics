#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, t;
	cin >> n >> t;

	string s; cin >> s;

	while(t--){
		for(int i = 1; i < s.size(); i++){
				if(s[i] == 'G' && s[i-1] == 'B'){
					swap(s[i], s[i-1]);
					i=i+1;
			}
		}
	}

	cout << s << endl;

	return 0;
}
