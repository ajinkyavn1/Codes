#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll w1,w2,x1,x2,m;
    cin>>w1>>w2>>x1>>x2>>m;
    if((w2-w1)>=(x1*m)&&(w2-w1)<=x2*m){
        cout<<"1\n";
    }else{
        cout<<"0\n";
    }
       
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}