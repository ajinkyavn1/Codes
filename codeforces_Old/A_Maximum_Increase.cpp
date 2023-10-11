#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vll v(n,0);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll res=1,l=0,r=1;
    while(r<n){
        if(v[r]>v[r-1]){
            res=max((r-l+1),res);
            r++;
        }else{
            l=r;
            r++;
        }
    }
    cout<<res;

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
