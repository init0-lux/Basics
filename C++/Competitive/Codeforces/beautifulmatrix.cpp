#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int A[5][5], cnt=0, cen=2;
	pair<int, int> pos;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			int temp;
			cin >> temp;
			if(temp == 1){
				pos.first=i;
				pos.second=j;
			}

			A[i][j] = temp;
		}
	}

	while( pos.first != cen){
		if(pos.first > cen ) pos.first-=1;
		else pos.first+=1;
		cnt+=1;
	}
	
	while( pos.second != cen ){
		if( pos.second > cen ) pos.second-=1;
		else pos.second += 1;
		cnt += 1;
	}

	cout << cnt << endl;
	return 0;
}
