#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int A[4];
	for(int i = 0; i < 4; i++) cin >> A[i];
	sort(A, A+4);

	for(int i = 0; i < 3; i++)
		cout << A[3] - A[i] << " ";

	cout << endl;
	return 0;
}
