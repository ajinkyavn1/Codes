#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    
    vector<vector<char>> v(9,vector<char>(9,'.'));
    for(int i=1;i<9;i++)
    for(int j=1;j<9;j++)
         cin>>v[i][j];
    for (int i = 1; i < 9; i++){
        for (int j = 1; j < 9; j++)
            {
                if(v[i-1][j-1]=='#'&&v[i+1][j-1]=='#'&&v[i+1][j+1]=='#'&&v[i-1][j+1]=='#')
                {
                    cout<<i<<" "<<j<<"\n";
                    return ;
                }
            }
    }
    // cout << "\n\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}