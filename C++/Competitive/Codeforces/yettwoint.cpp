#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define fast() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
	fast();
	int t;
	cin >> t;

	while(t--){
		int a, b, prev, cnt=0;
		cin >> a >> b;

		if(a!=b){
			if(a>b){
				for(int i = 10; i >= 0; i--){
					if (a-i>=b && i!= prev){
						++cnt;
						a-=i;
						prev=i;
					}
				}
			}
			else{
				for(int i = 10; i >= 0; i--)
					if(a+i<=b && i != prev){
						++cnt;
						a+=i;
						prev=i;
					}
			}
			
		}

		cout << cnt << endl;
	}

	return 0;
}
