#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int t, cnt = 0;
	cin >> t;
	
	while(t--){
		string a;
		cin >> a;

		switch(int(a[0])){
			case (int('T')):
				cnt += 4;
				break;
			case (int('C')):
				cnt += 6;
				break;
			case (int('O')):
				cnt += 8;
				break;
			case (int('D')):
				cnt += 12;
				break;
			case (int('I')):
				cnt += 20;;
				break;
		}
	}

	cout << cnt << endl;

	return 0;
}
