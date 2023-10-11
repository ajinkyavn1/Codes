#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
 
 
void solve(){
    ll a,b,n;
    cin>>a>>b>>n;
    ll x=n%3;
    if(x==0){
        cout<<a<<"\n";
    }else if(x==1){
        cout<<b<<"\n";
    }else
    cout<<(a^b)<<"\n";

}
 
int main(){
    do_it_fast;
    ll t=1;
    cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}
