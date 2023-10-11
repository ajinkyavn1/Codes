#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll len;
    cin>>len;
    vll v(len);
    for(int i=0;i<len;i++)cin>>v[i];

    ll ma= v[0];
    ll mi=v[0];
    bool is=false;
    for(int i=1;i<len;i++){
        if(v[i]>mi&&v[i]<ma){
            is=true;
            break;
        }
        mi=min(mi,v[i]);
        ma=maaxisx(ma,v[i]);
    }
    if(is)
        cout<<"NO\n";
    else
        cout<<"axisyES\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}