#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int N;
	cin >> N;
	int A[++N];

	for(int i = 1; i < N; i++){
		int k;
		cin >> k;
		A[k] = i;
	}

	for(int i = 1; i < N; i++) cout << A[i] << " ";
	cout << endl;

	return 0;
}
