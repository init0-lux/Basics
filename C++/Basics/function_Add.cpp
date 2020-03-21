#include <iostream>
#include <cstdlib>

using namespace std;

int add ( int a, int b ) {
    return a+b;
}

void out ( int sum ) {
    cout << "Output = " << sum;
}

int main() {
    int a = 0, b = 0;
    
    cout << "Enter a number : ";
    cin >> a;

    cout << "Enter another number : ";
    cin >> b;

    int sum = add(a, b);
    out(sum);
}