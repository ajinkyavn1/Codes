#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vll a(n),b(n);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    ll ans=0;
    for(int i=0;i<n;i++)ans=max(ans,a[i]-b[i]);
    for(int i=0;i<n;i++)
        a[i]=max((ll )0,a[i]-ans);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}