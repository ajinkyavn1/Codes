#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll axisx;
    if(n%3==1){
        axisx=1;
    }else{
        axisx=2;
    }
    ll Result=0;
    while(Result!=n){
        cout<<axisx;
        Result=Result+axisx;
        axisx=3-axisx;
    }
    cout<<"\n"; 
}


int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}