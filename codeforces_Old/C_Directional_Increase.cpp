#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll len;
    cin>>len;
    vll ans(len,0);
    ll sum=0;
   for(ll i=0;i<len;i++){
    cin>>ans[i];
    sum+=ans[i];
   }
   if(ans[0]> 0&& sum==0 && ans[len-1]<0){
        cout<<"Yes\n";
   }else{
        cout<<"No\n";
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