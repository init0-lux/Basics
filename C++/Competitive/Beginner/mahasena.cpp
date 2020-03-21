#include<bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	int a[N], even=0, odd=0;

	for(int i = 0; i<=N-1; i++)
		cin >> a[i];

	for(int i = 0; i<=N-1; i++){
		if(a[i]%2==0)
			even++;
		else
			odd++;
	}

	if(even > odd)
		cout << "READY FOR BATTLE" << endl;
	else
		cout << "NOT READY" << endl;


	return 0;
}
