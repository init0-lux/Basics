#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int m, n;
	cin >> m >> n;
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(i%2==0 or (i%4==1 and j == n-1) or ( i%4 == 3 && j == 0))
				cout << '#';
			else
				cout << '.';
		}
		cout << endl;
	}

	return 0;
}
