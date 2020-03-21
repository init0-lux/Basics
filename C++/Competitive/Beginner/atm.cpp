#include<bits/stdc++.h>
using namespace std;

void solve(int a, float b) {
	if(a%5 == 0 && a <= b - 0.5)
		b = b - a - 0.50;

	cout << fixed << setprecision(2) << b << endl;

}

int main() {
	int a;
	float b;

	cin >> a >> b;

	solve(a, b);

	return 0;
}
