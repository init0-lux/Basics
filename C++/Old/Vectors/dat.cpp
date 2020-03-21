#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
	vector <int>	vec 	(5, 10);
	vector <double>	vec2 	(5, 56.35);
	vector <char>	vec3	(5, 'z');
	vector <string>	vec4	(5, "SS");

	for ( int i = 0; i < vec.size(); i++ )
		cout << vec[i] << " ";

	cout << endl;

	for ( int i = 0; i < vec2.size(); i++ )
		cout << vec2[i] << " ";
	
	cout << endl;

	for ( int i = 0; i < vec3.size(); i++ )
		cout << vec3[i] << " ";

	cout << endl;

	for ( int i = 0; i < vec4.size(); i++ )
		cout << vec4[i] << " ";

	cout << endl;
}
