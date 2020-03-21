#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int N; cin >> N;
	string ret = "I hate";

	for(int i = 1; i < N; i++)
		ret += (i%2!=0)?" that I love":" that I hate";

	cout << ret << " it" << endl;
	return 0;
}
