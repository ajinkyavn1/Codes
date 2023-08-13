#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string s;
    cin>>s;
    ll res=0;
    char prev='a';
    for(ll i=0;i<s.size();i++){
        ll x=abs(s[i]-prev);
         x=min(x,26-x);
        prev=s[i];
        res+=x;
    }
    cout<<res<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; 
    // cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}