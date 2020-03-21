#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector <int> vec( 10, 9 );

    for ( int i = 0; i < vec.size(); i++ )
        cout << vec[i] << endl;
}