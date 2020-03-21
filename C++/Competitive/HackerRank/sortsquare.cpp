#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

vector <int> A;

int main() {
	int N; cin >> N;
	while(N--){
		int temp; cin >> temp;
		A.push_back(temp);
	}

	for(int i = 0; i < A.size(); i++) A[i] = pow(A[i], 2);
	sort(A.begin(), A.end());

	for(int i = 0; i < A.size(); i++) cout << A[i] << " ";
	cout << endl;
	
	return 0;
}
