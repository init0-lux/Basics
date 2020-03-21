#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	int T; cin >> T;
	
	for(int j = 0; j < T; j++){
		int N, B, ans = 0; cin >> N >> B;
		int A[N+1];
		for(int i = 0; i < N; i++) cin >> A[i];

		sort(A, A+N);
		
		for(int i = 0; i < N; i++){
			if( B >= A[i] ){
				B -= A[i];
				++ans;
			}
		}

		cout << "Case #" << j+1 << ": " << ans << endl;
	}
		
	return 0;
}
