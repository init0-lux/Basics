#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

// Func to print through maps
void print( map< int, string > &a);

int main() {
	// Maps = key + val; dict in python
	// 1 a b c
	// 5 c d c
	// 3 a c d
	//
	// in Normal maps: Sorted keys
	// in Unordered maps: Unsorted keys
	//
	// Can't do map+1; map++ or ++map is valid -> mem positions
	
	map< int, string > m;

	// Method 1;
	m[1] = "abc";
	m[5] = "cdc";
	m[3] = "acd";

	// Method 2;
	m.insert({69, "lol"});

	// Print using 'iterator'
	map<int, string> :: iterator it;
	for(it = m.begin(); it != m.end(); ++it) cout << (*it).first << " " << (*it).second << endl;

	cout << endl;
	print(m);

	// Finding in maps;
	auto ii = m.find(5);

	if( ii == m.end()) cout << "No such value" << endl;
	else cout << (*ii).first << " " << (*ii).second << endl;

	auto ij = m.find(7);

	if( ij == m.end()) cout << "No such value" << endl;
	else cout << (*ij).first << " " << (*ij).second << endl;
	
	// Deleting Mapped Vars;
	m.erase(1); m.erase(3);
	print(m);

	return 0;
}

void print( map< int, string > &a){
	cout << "Size: " << a.size() << endl;

	for(auto &i : a) cout << i.first << " " << i.second << endl;
	cout << endl;
}
