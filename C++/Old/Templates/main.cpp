#include<bits/stdc++.h>
using namespace std;

template <class x> 
x add(x a, x b){
	return a + b;
}

int main(){
	int ia = 1, ib = 10;
	float fa = 3.3, fb = 1.1;
	double da = 3, db = 4;

	string sa = "Hello", sb = " World!";

	cout << add <int> (ia, ib) << endl;
	cout << add <float> (fa, fb) << endl;
	cout << add <double> (da, db) << endl;
	cout << add <string> (sa, sb) << endl;

	cout << addint <int> (ia, ib) << endl;

	return 0;
}
