#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll count=0;
    ll t,k;
    cin>>t>>k;
    while(t--){
        ll n;
        cin>>n;
        if(n%k==0){
            count++;
        }
    }
    cout<<count;
}

int main(){
    do_it_fast;
        solve();     
    return 0;
}