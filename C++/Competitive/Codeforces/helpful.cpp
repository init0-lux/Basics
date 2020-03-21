#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	string a;
	cin >> a;
	vector<char> A;

	for(int i = 0; i < a.size(); i++) if( isalnum(a[i]) ) A.push_back(a[i]);

	sort( A.begin(), A.end() );

	if(A.size() > 1){
		cout << A[0];
		for(int i = 1; i < A.size(); i++) cout << "+" << A[i]; 
	}

	else cout << A[0];

	cout << endl;	

	return 0;
}
