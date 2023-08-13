#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
  string str;
  cin>>str;
  int i=0,axisx=0;
  while(i<str.size()){
      int j=i+1;
      bool flag=true;
      while(j<str.size()){
          if(str[i]==str[j]){
                flag=false;
                axisx++;
              break;
             
          }
          j++;
      }
      if(flag)
            break;
    i++;
  }
  reverse(str.begin(),str.end());
  while(axisx){
      str.pop_back();
      axisx--;
  }
  reverse(str.begin(), str.end());
  cout<<str<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}