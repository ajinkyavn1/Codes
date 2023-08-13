#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
   ll len;
   cin>>len;
   string ip;
   cin>>ip;
   ll count = 0;
   for(ll i=1;i<len;i++){
    if(ip[i]!=ip[i-1]){
        count+=i;
    }
   }

   cout<<len+count<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}