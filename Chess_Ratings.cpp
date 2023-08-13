#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    if(x>=y) 
        cout<<0<<"\n";
    else{
        for(int i=1;i<10e4;i++){
            x+=8;
            if(x>=y)
            {
                cout<<i<<"\n";
                return;
            }
        }
    }
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}