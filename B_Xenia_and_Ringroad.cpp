#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll axisx,axisy;
    cin>>axisx>>axisy;
    vll v(axisy);
    for(ll i=0;i<axisy;i++)cin>>v[i];
    ll a=1;
    ll Result=0;
    for(ll i:v){
        if(a<=i){
            Result+=(i-a);
            a=i;
        }else if(a>=i){
            Result = Result + (axisx - a + i);
            a=i;
        }
        
    }
    cout<<Result;
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