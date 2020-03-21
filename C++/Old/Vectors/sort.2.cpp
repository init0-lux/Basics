#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <time.h>
#include <stdlib.h>

using namespace std;

int rand_gen();

int main() {
	vector <int> vec, vec2;
	
	for ( int i = 0; i < 15; i++ ) {
		vec.push_back( rand_gen() + ( rand_gen() - i ) );
		vec2.push_back( rand_gen() + ( rand_gen() - i + 35 ) );
	}

	// vec.push_back( rand_gen() );
	// cout << vec[0];
	// cout << endl;
	// sort( vec.end(), vec.begin() );
	// cout << endl;
	
	/*for ( int i = 0; i < vec.size(); i++ ) {
		cout << vec[i] << " ";
	}

	for ( int i = 0; i < vec2.size(); i++ ) {
		cout << "vec2 " << vec2[i] << endl;
	}
	*/

	sort( vec.begin(), vec.end() ); 			// Ascending Order; Part of reverse();
	sort( vec2.begin(), vec2.end() ); 			// Ascending Order; Part of reverse();
	
	// sort( vec.end(), vec.begin() ); 			// Descending Order; Does Not Work!!!
	// sort( vec2.end(), vec2.begin() );			// Descending Order; Does Not Work!!!
	
	// sort( vec.begin(), vec.end(), greater<int>() ); 	// Descending Order; GeeksForGeeks Version;
	// sort( vec.begin(), vec.end(), greater<int>() ); 	// Descending Order; GeeksForGeeks Version;

	sort( vec.rbegin(), vec.rend() );			// Descending Order; Done Right;

	// reverse( vec.begin(), vec.end() );			// Descending Order; Part of reverse(); Works!!!

	for ( int i = 0; i < vec.size(); i++ )
		cout << vec[i] << " ";
	
	cout << endl;

	for ( int i = 0; i < vec2.size(); i++ )
		cout << vec2[i] << " ";

	cout << endl;
	return 0;
}

int rand_gen() {
	srand( time( NULL ) );
	return rand() % 50 + 1;
}
