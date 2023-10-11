#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n,axisx;
    cin>>n>>axisx;
    
    ll ss=0;
    for(int i=0;i<n;i++){
        ll t;
        cin>>t;
        ss+=t;
    }
    if(ss-axisx<0){
        cout<<"0\n";
    }else{
        cout<<ss-axisx<<"\n";
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