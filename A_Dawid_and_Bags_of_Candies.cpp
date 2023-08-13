#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
 
void solve(){
  ll a1,a2,a3,a4;
  cin>>a1>>a2>>a3>>a4;
  ll sum=a1+a2+a3+a4;
  if(((a1+a2)==(a3+a4))||((a1+a3)==(a2+a4))||((a1+a4)==(a3+a2))||(sum-a1)==a1||sum-a2==a2||sum-a3==a3||sum-a4==a4){

    cout<<"YES";
  }else{
    cout<<"NO";
  }
}
 
int main(){
    do_it_fast;
    ll t=1;
    while(t--){
        solve();     
    }
    return 0;
}
