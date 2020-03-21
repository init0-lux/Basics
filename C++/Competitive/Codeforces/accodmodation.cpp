#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int T, rooms = 0;

	cin >> T;
	while(T--){
		int p, q;
		cin >> p >> q;

		if(q-p >= 2) ++rooms;
	}

	cout << rooms << endl;

	return 0;
}
