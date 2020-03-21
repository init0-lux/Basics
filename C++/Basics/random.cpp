# include <iostream>
# include <cstdlib>
# include <stdlib.h>
# include <time.h>

using namespace std;
int number ( int end );

int main() {
	int end;
	// cout << "Enter Ending Number : ";
	// cin >> end;
	end = 100;

	cout << "Rand = " << number (end) << endl;

	return 0;
}

int number ( int end ) {
	int retvalue;
	srand ( time ( NULL ));
	retvalue = rand() % end + 1;

	return retvalue;
}
