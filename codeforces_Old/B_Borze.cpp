#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
  string s;
  cin>>s;
  int flag=0;
  string ans="";
  ll i=0;
  while(i<s.size()-1){
      if(s[i]=='-'&&s[i+1]=='-'){
          ans+=to_string(2);
          i+=2;
      }else if(s[i]=='-'&&s[i+1]=='.'){
          ans+=to_string(1);
          i+=2;
      }if (s[i] == '.' && s[i+1] == '-'||s[i]=='.'&&s[i+1]=='.')
      {
          ans += to_string(0);
          i++;
      }
  }  
  if(i==s.size()-1) ans+='0';
  cout<<ans;
}

int main(){
    do_it_fast;
    //  cin>>t;
    ll t=1;
    while(t--){
        solve();     
    }
    return 0;
}