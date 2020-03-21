#include <iostream>

using namespace std;

int main() {
	int run = 10;

	// Difference: The code will Run at least once
	do {
		cout << run << endl;
		run -= 1;
	}
	while(run >= 0);

	return 0;
}
