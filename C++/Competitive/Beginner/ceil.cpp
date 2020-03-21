#include<bits/stdc++.h>
using namespace std;

int main() {
	int T, a[12];
	cin >> T;

	for(int i = 0; i < 11; i++)
		a[i] = pow(2, i);
	
	while(T--){
		int N, j=11, menus=0;
		cin >> N;
		if(N>2048){
			while(N>2048){
				N-=2048;
				menus++;
			}
		}
		if(0<N<=2048){
			while(N > 0){
				if( N >= a[j] ){
					N -= a[j];
					menus++;
				}
				else j--;
			}
		}
		cout << menus << endl;
	}

	return 0;
}
