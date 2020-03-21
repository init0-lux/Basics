#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> Function() {
	vector <int> vec;

	vec.push_back(30);
	vec.push_back(35);
	vec.push_back(14605);
	vec.push_back(6);
	vec.push_back(3795);

	return vec;
}

int main() {
	size_t size = 20;
	vector <int> v(20);

	for ( int i = 0; i < size; i++ ) 
		v[i] = i;

	cout << "\nValues of vector : ";
	for ( int i = 0; i < size; i++ )
		cout << v[i] << endl;
	
	vector<char> seq1;
	char c = 0;

	while ( c != 'x' ) {
		cout << "Press 'x' to exit: ";
		cin >> c;

		seq1.push_back(c); // push_back appends one element at a time;
	}

	cout <<"\n\nInputs from above input:" << endl;
	for ( int i = 0; i < seq1.size(); i++ )
		cout << seq1[i];

	cout << endl;
}
