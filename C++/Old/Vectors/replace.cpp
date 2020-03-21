#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int> vec={ 1, 4, 32, 5, 6, 8 };

	for ( int i = 0; i < vec.size(); i++ )
		cout << vec[i] << " ";

	replace( vec.begin(), vec.end(), 4, 32 );

	cout << endl;

	for ( int i = 0; i < vec.size(); i++ )
		cout << vec[i] << " ";
	
	cout << endl;
}
