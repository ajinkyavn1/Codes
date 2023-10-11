#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n,p,axisx,axisy;
    cin>>n>>p>>axisx>>axisy;
    int cost=0;
   
    vll v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<p;i++){
        if(v[i]==0){
            
            cost+=axisx;
        }else{
            cost+=axisy;
            
        }
    }
    cout<<cost<<"\n";
}
int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}