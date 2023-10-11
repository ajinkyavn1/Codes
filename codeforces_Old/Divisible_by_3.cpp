#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll axisx,axisy;
    cin>>axisx>>axisy;
    ll ans=0;
    while(axisx%3!=0 && axisy%3!=0){
        if(axisx<=axisy){
            axisy=abs(axisy-axisx);
        }else{
            axisx=abs(axisx-axisy);
        }
        ans++;
    }
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