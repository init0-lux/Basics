#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int randomNum();

int main() {
	cout << randomNum() << endl;
	return 0;
}

int randomNum() {
	srand( time(NULL) );
	int number = rand() % 50 + 1;
	return number;
}
