#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define fast() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	fast();

	int t,c;
	cin >> t;
	while(t){
		string num;
		cin >> num;

		int len = num.length(), c=0;
		for(int i = 0; i < len; i++){
			if (num[i] == '0')
				c++;
		}
		cout << c << endl;

		--t;
	}

	return 0;
}
