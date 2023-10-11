#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll num;
    cin>>num;
    if(num%4==2||num%4==3)
        cout<<3<<"\n";
    else  if(num%4==0){
        cout<<3+num<<"\n";
    }else if(num%4==1){
        cout<<num<<"\n";
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