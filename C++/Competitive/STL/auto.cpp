#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main() {
	vector <int> vec = {1, 2, 3, 4, 5};

	for( int i : vec ) cout << i << " ";
	cout << endl;
	for( int i : vec ) cout << char(i+64) << " "; 
	cout << endl;
	
	return 0;
}
