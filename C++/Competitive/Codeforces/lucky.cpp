#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define fast() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
	fast();
	string n;
	cin >> n;
	bool b = true;

	for (int i = 0; i < n.size(); i++){
		if(n[i] == '4' or n[i] == '7'){
			b=true;
			continue;
		}

		else {
			cout << "NO" << endl;
			break;
		}
	}

	cout << ((b)?"YES":"") << endl;

	return 0;
}
