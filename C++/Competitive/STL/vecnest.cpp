#include<bits/stdc++.h>
using namespace std;

int main() {
	// close to dictionary 
	vector< pair< int, int >>  vec;
	vec = { {1,2}, {3,4}, {5,6} };

	for(int i = 0; i < vec.size(); ++i)
		cout << vec[i].first << " " << vec[i].second << endl;

	return 0;
}
