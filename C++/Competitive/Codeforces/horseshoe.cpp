#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int need = 0;
	int A[4];

	for(int i = 0; i < 4; i++) cin >> A[i];

	sort(A, A+4);

	for(int i = 0; i < 4; i++)
		(A[i] == A[i+1])?++need:need=need;

	cout << need << endl;

	return 0;
}
