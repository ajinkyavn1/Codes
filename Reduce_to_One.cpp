#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    vll v(x);
    for(auto &i:v) cin>>i;
    ll ma=INT_MIN;
    for(auto a=0;a<v.size()-1;a++){
        ma=max(v[a],ma);
    }
    if(ma<=v.back())
        cout<<"No\n";
    else    
        cout<<"Yes\n";
}
int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}