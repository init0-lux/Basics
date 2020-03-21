

    #include<bits/stdc++.h>
    using namespace std;
     
    typedef long long ll;
    #define endl "\n"
     
    int main() {
           	int t,arr[100],count=0,k;
           	cin >> t >> k;
           	for(int i=0; i<t; i++) {
    	       	cin >> arr[i];
    	       	if (arr[i] > 0) { 
    			if (arr[i] >= arr[k-1]) {
    			       	count += 1; } }
     
    		else {
    		       	continue;
    	       	} 
    	} 
    	cout << count << endl;
           	return 0;
    }
