#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    unordered_map<ll,ll>mp;
    ll coun=0;
    for(ll i=1;i<=n;i++){
        ll oraxisx = i | coun;
        mp[i]=oraxisx;
        coun=oraxisx;
    }

    if (mp[n - 1] == mp[n])
    {
        cout<<"1\n";
    }
    else
    {
        cout<<"0\n";
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