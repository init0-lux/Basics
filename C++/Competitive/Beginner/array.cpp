#include<bits/stdc++.h>
using namespace std;

int main( int argc, char** args ) {
	// Never do this
	// int a[10];
	// a[11] = 111;
	if (argc < 2)
		cout << "Usage: " << args[0] << " <number of inputs> <inputs>" << endl;
	else{
		int n = atoi(args[1]), sum = 0;

		for(int i = 2; i < argc; i++){
			sum += atoi(args[i]);
		}

		cout << sum << endl;
	}

	return 0;
}
