#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int player1 = 0, ans , player2 = 0, maxLead = INT_MIN;
    while(n--){
        int s,t;
        cin>>s>>t;  
        player1 += s;
        player2 += t;
        if( abs(player1 - player2) > maxLead ){
            maxLead = abs(player1 - player2);
            if(player1 > player2)
                ans = 1;
            else
                ans = 2;
        }
    }
    cout<<ans<<" "<<maxLead << endl;
}

