#include<bits/stdc++.h>
using namespace std;

int main() {
	// Matrix Array
	// Matrix of 4x3;
	// a[0][0] = top left
	// a[0][2] = top right
	//
	// | 1 | 2 | 3 |
	// | 4 | 5 | 6 |
	// | 7 | 8 | 9 |
	//
	//
	// MAX = 10^5
	//
	int a[4][3];

	for (int i = 0; i < 4; i++ ) {
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	}

	for (int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		
		cout << endl;
	}

	return 0;
}
