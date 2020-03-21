#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

bool dis(int n){
	string s = to_string(n); bool ret = true;

	sort(s.begin(), s.end());

	for(int i = 0; i < s.size()-1; i++){
		if(s[i] != s[i+1]) continue;
		else ret = false;
	}
	
	return ret;
}

int main() {
	int n;
	cin >> n;
	++n;

	while(true){
		if(dis(n)) break;
		else ++n;
	}

	cout << n << endl;

	return 0;
}
