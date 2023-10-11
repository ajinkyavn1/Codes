#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    double Result=0.0,ans=0.0;
    for(ll i=0;i<n;i++){
        ll axisx;
        cin>>axisx;
        Result+=axisx;
    }
    ans=Result/n;
    cout<<fiaxisxed<<setprecision(12)<<ans<<"\n";
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