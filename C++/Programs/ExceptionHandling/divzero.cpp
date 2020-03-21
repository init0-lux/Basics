#include<iostream>

using namespace std;

float division(int x, int y){
	// try case
	if (y == 0) {
		throw "Attempted to divide by 0!";
	}

	return (x/y);
}

int main() {
	int i = 50, j = 0;
	float k = 0;
	
	// this will result in <Floating point exception (core dumped)>
	// k = division(i, j);
	// cout << k << endl;
	
	try{
		k = division(i , j);
		cout << k << endl;
	}
	catch(const char* e){
		cerr << e << endl;
	}

	return 0;
}
