#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll w,x,y,z;
    cin>>w>>x>>y>>z;
    ll ans=0;
        if(w<x)ans++;
        if(w<y)ans++;
        if(w<z)ans++;
        cout<<ans<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}