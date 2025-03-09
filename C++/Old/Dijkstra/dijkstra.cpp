#include<bits/stdc++.h>
#include "dijkstra.h"

using namespace std;

int main() {
	cout << "Number of Cities : " << endl;
	cin >> N;

	cout << "Number of edges : " << endl;
	cin >> E;

	cout << "Enter the edges ( from, to , weight ) : " << endl;
	for ( int i = 0; i < E; i++ ) {
		int from, to, weight;
		cin >> from >> to >> weight;

		G[from].push_back(( to, weight ));
	}

	int start;

	cout << "Start city : " << endl;
	cin >> start;

	vector <int> distance = dijkstra( start );

	for ( int i = 0; i < N; i++ )
		cout << "Min Distance to " << i << "is : " << distance[ i ] << endl;

	return 0;
}
