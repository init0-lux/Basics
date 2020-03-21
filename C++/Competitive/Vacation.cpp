#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int N, M;
	cin >> N >> M;
	int A[N+1][M+1];
	
	for(int i = 1; i < M+1; i++)
		for(int j = 1; j < N+1; j++)
			cin >> A[i][j];

	int Q;
	cin >> Q;

	int Days[Q][4];

	for(int i = 0; i < Q; i++)
		for(int j = 0; j < 4; j++)
			cin >> Days[i][j];

	for(int i = 0; i < Q; i++){
		int a = Days[i][0], b = Days[i][1], c = Days[i][2], d = Days[i][3], ret = 1;
		
		ret = ret*A[a][b];
		while( a < c or b < d ){
			if(A[a][b+1] == 0)
				++b;
			else if(A[a+1][b] == 0)
				++a;
			else{
				/*if( c - a > d - b )
					++a;
				else ++b;*/
				++b;
			}
			
			ret = ret*A[a][b];
			cout << ret << endl;
		}
		
		ret *= A[a][b];
		cout << ret;
	}


	return 0;
}
