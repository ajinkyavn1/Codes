#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll s,n;
    cin>>s>>n;
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
       v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    for(auto a:v){
        if (a.first < s)
            s += a.second;
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main(){
    do_it_fast;
    ll t=1; 
    // cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}