#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;


void solve(){
    ll n;
    cin>>n;
    vll v(n);
    for(auto &i:v)cin>>i;
    ll x=0;
    for(int i=n-1;i>=0;i--){
        if(v[i]!=0){
            x=i;
            break;
        }
    }
    cout<<x<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}