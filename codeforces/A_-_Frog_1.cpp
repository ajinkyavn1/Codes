#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

ll getmin(int i,vll &v,vll &dp){
    if(i==0 || i==1){
        return 0;
    }
    ll cost;
    if(dp[i]!=-1){
        return dp[i];
    }
     cost=min((getmin(i-2,v,dp)),(getmin(i-1,v,dp)+(v[i])));
    // if(i>1){
    //     cost=min(cost,);
    // }
    return dp[i]=cost;
}
void solve(){
    ll n;
    cin>>n;
    vll v(n);
    
    for(int i=0;i<n;i++)cin>>v[i];
    vll dp(1e5+10,-1);
    cout<<getmin(n-1,v,dp);
}

int main(){
    do_it_fast;
    
    ll t=1;
    while(t--){
        solve();     
    }
    return 0;
}