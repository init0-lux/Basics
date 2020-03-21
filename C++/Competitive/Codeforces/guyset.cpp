#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n, p;
	cin >> n >> p;
	set <int> s;

	for(int i = 0; i < p; i++){
		int temp;
		cin >> temp;
		s.insert(temp);
	}
	cin >> p;
	
	for(int i = 0; i < p; i++){
		int temp;
		cin >> temp;
		s.insert(temp);
	}

	if(s.size() == n)
		cout << "I become the guy." << endl;
	else 
		cout << "Oh, my keyboard!" << endl;

	return 0;
}
