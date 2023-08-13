#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int u,v,a,s;
    cin>>u>>v>>a>>s;
    ll v2=(u*u)-(2*a*s);
    if(v2<=(v*v)){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
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