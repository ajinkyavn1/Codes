#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vll v(n,0);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++){
        ll k=3;
        ll sum=0;
        for(int j=0;j<n&&k>0;j++){
            if(i==j)continue;
            else{
                k--;
            }
            sum+=v[j];
        }
        if(sum%10==3){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}