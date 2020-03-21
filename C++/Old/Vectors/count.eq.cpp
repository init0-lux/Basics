#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int> vec, vec2;

	for ( int i = 0; i < 15; i++ ) {
		vec.push_back( i );
		vec2.push_back( i );
	}

	cout << "Number of times 4 appears in vec = " << count( vec.begin(), vec.end(), 4 ) << endl;
	
	if ( equal( vec.begin(), vec.end(), vec2.begin() ) )	// Returns a value;
		cout << "They are equal..." << endl;		// Returns a 0;
	else
		cout << "They are not equal..." << endl;

	return 0;
}
