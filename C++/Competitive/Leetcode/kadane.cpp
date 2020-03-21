#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

vector<int> A;

int maxx( vector<int> A );

int main() {
	cout << "Type 499 to stop input" << endl;
	
	bool flag = true;
	while(flag){
		int temp;
		cin >> temp;

		if(temp != 499) A.push_back(temp);
		else 	flag = false;
	}

	cout << maxx( A ) << endl;

	return 0;
}

int maxx( vector<int> A ){
	int maxsum = min( 0, A[0] ), curr = maxsum;

	for(int i = 0; i < A.size(); i++){
		curr = max( curr + A[i], A[i] );
		maxsum = max( curr, maxsum );
	}

	return maxsum;
}
