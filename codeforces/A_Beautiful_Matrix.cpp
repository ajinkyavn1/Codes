#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    for(int i=1;i<6;i++){
        for(ll j=1;j<6;j++){
            ll x;
            cin>>x;
            if(x==1){
                cout<<abs(3-i)+abs(3-j);
            }
        }
    }
}

int main(){
    do_it_fast;
    ll t=1; 
    while(t--){
        solve();     
    }
    return 0;
}
//  3 3
//  1 4
// 2+1