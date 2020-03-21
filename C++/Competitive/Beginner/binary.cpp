#include<bits/stdc++.h>
using namespace std;

vector<int> vec;
int main() {
	int T; cin >> T;
	
	while(T--){
		int temp; cin >> temp;

		vec.push_back(temp);
	}

	cout << "Enter the number to find: ";
	int Num; cin >> Num;

	sort( vec.begin(), vec.end() );

	int mid = (T%2==0)?T/2 : (T+1) / 2;
	
	if( vec[mid] == Num ) cout << "True " << mid << endl;

	else if( Num < vec[mid] ){
		for(int i = 0; i < mid; i++)
			if(vec[i] == Num)
				cout << "True " << i << endl;
	}

	else if( Num > vec[mid]){
		for(int i = mid; i < T; i++)
			if(vec[i] == Num)
				cout << "True " << i << endl;
	}

	else cout << "False" << endl;
	
	return 0;
}
