#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
   ll n,k;
   cin>>n>>k;
  if(k<=((n+1)/2)){
      cout<<k*2-1;
  }else{
      cout<<((k-(n+1)/2)*2);
  }
    return 0;
}