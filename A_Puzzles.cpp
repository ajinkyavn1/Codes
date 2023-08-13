#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> vect;
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        vect.push_back(x);
    }
    sort(vect.begin(),vect.end());
    ll diff=vect[n-1]-vect[0];
    for(int i=1;i<=(m-n);++i){
        diff = (vect[i + n - 1] - vect[i]) < diff ? 
        vect[i + n - 1] - vect[i]:diff;
    }
    cout<<diff;
}

int main(){
    do_it_fast;
    ll t=1;// cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}