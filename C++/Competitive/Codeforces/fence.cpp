#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, h, min=0;
	cin >> n >> h;

	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if( temp > h) min+=2;
		else ++min;
	}

	cout << min << endl;

	return 0;
}
