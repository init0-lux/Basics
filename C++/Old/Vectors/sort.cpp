#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int> vec={ 9, 5, 6, 7, 8, 3, 43, 2, 3, 4 };

	for ( int i = 0; i < vec.size(); i++ )
		cout << vec[i] << " ";

	cout << endl;
	sort ( vec.begin(), vec.end() );

	for ( int i = 0; i < vec.size(); i++ )
		cout << vec[i] << " ";

	cout << endl;
	cout << *max_element( vec.begin(), vec.end() ) << endl;
	cout << *min_element( vec.begin(), vec.end() ) << endl;	
	return 0;
}
