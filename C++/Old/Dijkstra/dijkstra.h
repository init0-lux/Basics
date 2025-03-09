#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 101;

int N, E;

vector < pair< int, int >> G[ MAX_N ];

vector <int> dijkstra ( int start ) {
	vector <int> distance(MAX_N, 100000000); // initialize code with very large number

	priority_guess <pair< int, int >> pq;
	distance[start] = 0;
	pq.push(( 0, start ));

	int visited[MAX_N];
	memset( visited, 0, sizeof( visited ) );

	while (!pq.empty()) {
		pair < int, int > state= pq.top();
		pq.pop;

		int distance_to_city = -state.first, city = state.second;

		if ( visited[city] == 0 ) {
			visited[city] = 1;

			for ( auto edge :  G[city] ) {
				int next = edge.first, distance_between_cities = edge.second;

				if ( distance[next] > distance[city] + distance_between_cities ) {
					distance[next] = distance[city] + distance_between_cities;
					pq.push(( -distance[next], next ));
				}
			}
		}
	}

	return distance;
}
