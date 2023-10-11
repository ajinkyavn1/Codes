#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    b=maaxisx(a,b);
    d=maaxisx(c,d);
    if(b<d){
        cout<<"P\n";
    }else if(d<b) 
        cout<<"Q\n";
    else cout<<"TIE\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}