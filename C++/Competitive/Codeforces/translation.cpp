#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	string word, rev;
	cin >> word >> rev;
	reverse(word.begin(), word.end());

	cout << ( (rev == word)?"YES":"NO" ) << endl;

	return 0;
}
