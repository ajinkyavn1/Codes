#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
   if(n>19)
  { 
      cout<<"NO\n";
       return;
   }
   int x=1;
   vll v;
    for(int i=1;i<=n;i++){
        if(x>INT_MAX) break;
        v.push_back(x);
        x*=3;
    }
    cout<<"YES\n";
   for(auto a:v) cout<<a<<" ";
   cout<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}