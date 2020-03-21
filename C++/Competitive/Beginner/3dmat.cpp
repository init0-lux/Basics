#include<bits/stdc++.h>
using namespace std;

int main(){
	// 3D Matrix
	int a[3][3][2];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 2; k++){
				srand( time(NULL) );
				a[i][j][k] = rand() % 10 + 1;
			}
		}
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 2; k++)
				cout << a[i][j][k] << " ";
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}
