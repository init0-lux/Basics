#include <bits/stdc++.h>
using namespace std;

#define P 1000000007
#define ll long long int
#define endl "\n"

int main() {
	int t; cin >> t;

	while(t--){
		string cell; cin >> cell;

		int colInd = cell.find('C');

		if (cell[0] == 'R' && colInd != cell.size()-1 && cell[1] >= 0 && cell[1] <= '9') {
			int col = stoi(cell.substr(colInd+1, cell.length()-colInd-1));
			string ans="";

			do {
				ans += (col-1) % 26 + 'A';
				col = (col-1) / 26;
			} while (col > 0);

			reverse(ans.begin(), ans.end());
			cout <<  ans + cell.substr(1, colInd-1) << endl;
		}

		else{
			int col = 0, i = 0;

			for(; i < cell.size(); i++)
				col = col*26 + (1 + cell[i] - 'A');

			cout << 'R' << cell.substr(i, cell.length()-i) << 'C' << col << "\n";
		}
	} 
}
