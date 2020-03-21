#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, q;
	cin >> n >> q;

	vector <string> A, B;

	for(int i = 0; i < n; i++){
		while(true){
			string temp;
			cin >> temp;
			A.push_back(temp);
			if(temp[temp.size()-1] == '>') break;
		}
	}

	for(int i = 0; i < q; i++){
		string temp;
		cin >> temp;
		B.push_back(temp);
	}

	for(int i = 0; i<A.size(); i++){
		cout << A[i] << endl;
	}

	return 0;
}
