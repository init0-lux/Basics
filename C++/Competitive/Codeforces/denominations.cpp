#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, cnt = 0;
	cin >> n;
	int A[] = {100, 20, 10, 5, 1};

	for(int i = 0; i < 5; i++){
		cnt += n/A[i];
		n %= A[i];
	}

	cout << cnt << endl;

	return 0;
}
