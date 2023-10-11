#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
const int maxisx=1e5+5;
const int Mod=1e9+7;
vector<ll> ansvect(maxisx);
void pre(){
    ansvect[1]=1;
    for(int i=2;i<maxisx;i++){
        ansvect[i]=(ansvect[i-1]*2)%Mod;
    }
}
void solve(){
    int n;
    cin>>n;
    cout<<ansvect[n]<<"\n";

}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    pre();
    while(t--){
        solve();     
    }
    return 0;
}