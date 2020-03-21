#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {

	int N; cin >> N;
	int Game[N];
	int H; cin >> H;

	for(int i = 0; i < N; i++) cin >> Game[i];

	vector<int> comm;

	bool flag = true;
	while(flag){
		int temp;
		cin >> temp;
		if(temp != 0)
			comm.push_back(temp);
		else
			flag = false;
	}

	int pos = 0;
	bool box = false;
	for(int i = 0; i < comm.size(); i++){
		cout << "Here " << i << " " << comm[i] << endl;
		switch(comm[i]){
			case 1:
				if(pos > N-1)
					pos+=1;
				cout << pos << endl;
				break;
			case 2:
				if(pos < 0)
					pos-=1;

				cout << pos << endl;
				break;
			case 3:
				cout << Game[pos] << endl;
				if(box==0)
					Game[pos] = Game[pos]-1;
				cout << Game[pos] << endl;
				cout << box;
				box = true;
				break;
			case 4:
				if(box==true)
					Game[pos] += 1;
				box = false;
				cout << box << " " << Game[i] << endl;
				break;
		}
	}

	for(int i = 0; i < N; i++) cout << Game[i] << " ";
	cout << endl;

	return 0;
}
