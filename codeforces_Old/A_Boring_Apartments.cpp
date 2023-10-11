#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll to=0;
    for(int i=1;i<=9;i++){
        ll sum=0;
        for(ll j=1;j<=4;j++){
            sum=sum*10+i;
            to+=j;
            if(sum==n){
                cout<<to<<"\n";
                return;
            }
        }
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