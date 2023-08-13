#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
   string s;
   cin>>s;
   string res="";
   for(int i=0;i<s.size();i++){
    int x=s[i]-'0';
    ll xi=9-x;
    if(x>4)
        res += to_string(xi);
    else    
        res+=s[i];
   } 
   cout<<res;
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}