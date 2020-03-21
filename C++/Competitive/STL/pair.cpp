#include<bits/stdc++.h>
using namespace std;

int main() {
	// a pair of int and string
	pair<int, string> p, q;
	
	p = make_pair(22, "Hello, World!");
	q = {222, "Hello Wolll"};	

	cout << p.first << " " << p.second << endl;
	cout << q.first << " " << q.second << endl;

	// q.second= "First";
	// cout << endl << q.second << endl;

	int a[] = {1, 2, 3}, b[] = {4, 5, 6};
	pair<int, int> arr[3];

	return 0;
}
