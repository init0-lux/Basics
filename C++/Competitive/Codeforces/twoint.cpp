#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define fast() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	int t;
	cin >> t;

	while(t--){
		int a, b, j = 0;
		cin >> a >> b;

		if(a == b) cout << j << endl;

		else if( a > b ){
			while( a > b ){
				for(int i = 10; i > 0; --i )
					if(b+i <= a){
						b+=i;
						++j;
					}
			}
		}

		else {
			while( a < b ){
				for(int i = 10; i > 0; --i )
					if(a+i <= b){
						a+=i;
						++j;
					}
			}
		}
		
		cout << j << endl;
	}

	return 0;
}
