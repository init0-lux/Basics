#include <iostream>
#include <cstdlib>

using namespace std;

template < class X >
X add( X a, X b ) {
	return a + b;
}

int main() {
	int x1, x2, x;
	float y1, y2, y;
	double z1, z2, z;
	string st1, st2, str;

	cout << "enter two int numbers: ";
	cin >> x1 >> x2;

	cout << "enter two float numbers: ";
	cin >> y1 >> y2;

	cout << "enter two float numbers: ";
	cin >> z1 >> z2;

	cout << "Enter your name: ";
	cin >> st1 >> st2;

	x = add <int> ( x1, x2 );
	y = add <float> ( y1, y2 );
	z = add <double> ( z1, z2 );
	str = add <string> ( st1, st2 );

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	cout << str << endl;
}
