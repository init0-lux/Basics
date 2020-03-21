#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int distinct=0;
	string name;
	cin >> name;

	sort(name.begin(), name.end());

	for(int i = 0; i < name.size()-1; i++){
		if( name[i] == name[i+1] ) continue;
		else ++distinct;
	}
	
	if(distinct%2==0) cout << "IGNORE HIM!" << endl;
	else cout << "CHAT WITH HER!" << endl;

	return 0;
}
