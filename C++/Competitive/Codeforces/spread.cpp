#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	int n;
	cin >> n;

	string A[n];
	for(auto i = 0; i < n; i++) cin >> A[i];

	for( string a : A ){
		string ret = "";
		if( a[0] != 'R' ){
			string letter = "", num = "";
			for(int i = 0; i < a.size(); i++){
				if(isalpha(a[i])) letter.push_back(a[i]);
				else num.push_back(a[i]);
			}

			reverse(letter.begin(), letter.end());
			
			int col = 0;
			for(int i = 0; i < letter.size(); i++){
				int ch = int(letter[i]) - 64;
				col += i*ch*26 + ch - 1;
			}

			ret+= "R" + num + "C" + to_string( (col==0) );
		}

		else{
			string row = "", col = "";
			for(int i = 0; i < a.size(); i++){
				if(a[i] == 'R'){
					for(int j = i+1; j < a.size(); j++){
						if(a[j] == 'C') break;
						else row.push_back(a[j]);
					}
				}
				else if(a[i] == 'C')
					for(int j = i+1; j < a.size(); j++)
						col.push_back(a[j]);
			}
			int c;
			string l;
			c = stoi(col);
			
			l += char(c/26+64);
			c %= 25;
			l += char(c+63);

			for(int i = 0; i < l.size(); i++){
				if( isalpha(l[i]) ) continue;
				else l.erase(i);
			}

			ret+= l +row;
		}
		cout << ret << endl;
	}

	return 0;
}
