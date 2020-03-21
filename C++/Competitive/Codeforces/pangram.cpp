#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n;
	cin >> n;

	if(n<26){
		cout << "NO" << endl;
		exit(0);
	}

	else{
		set<char> a;
		string s;
		cin >> s;
		
		for(auto i : s){ 
			i = tolower(i);
			a.insert(i);
		}

		if(a.size()>=26) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
