#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll x,y;
    cin>>x>>y;
    int d=0,r=0;
  char mat[x+1][y+1];
    for(int i=1;i<=x;i++){

        for(int j=1;j<=y;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=1;i<=x-1;i++){
        if(mat[i][y]!='D'){
            d++;
        }
    }
    for (int i = 1; i <= y - 1; i++)
    {
        if (mat[x][i] != 'R')
        {
            r++;
        }
    }
    cout<<d+r<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}