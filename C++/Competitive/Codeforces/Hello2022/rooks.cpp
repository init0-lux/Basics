#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		char N[n+1][n+1];

		if(n <= k){
			cout << -1 << endl;
			continue;
		}
		for(int i = 1; i < n+1; i++)
			for(int j = 1; j < n+1; j++)
				N[i][j] = '.';
		
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,string> a,pair<int,string> b){
	if(a.first!=b.first)
		return a.first>b.first;
	else
		return a.second<b.second;
}

int main(){
	int n;
	cin>>n;
	
	while(n--){
		int s, r, q; 
		cin >> s >> r;
		
		if(s%2==0)
			q=s/2;
		else
			q=(s+1)/2;
		
		if( r>q ) cout<<"-1"<<endl;

		else{
			char a[s][s];

			for(int i=0;i<s;i++)
				for(int j=0;j<s;j++)
					a[i][j]='.';

			int i=0,j=0;

			while(r--){
				a[i][j]='R';
				i+=2;
				j+=2;
			}

			for(int i=0;i<s;i++){
				for(int j=0;j<s;j++)
					cout<<a[i][j];
				cout<<endl;
			}
		}
	}
}
