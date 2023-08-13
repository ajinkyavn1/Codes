#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
  ll n,axisx,a;
  cin>>n>>axisx>>a; 
  string s1,s2,c="";
  cin>>s1>>s2; 
  c=s1+s2;
  sort(c.begin(),c.end());
  cout<<c<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}