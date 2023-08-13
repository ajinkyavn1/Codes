#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
 int fun(int n){
    if(n&1){
        return n/2;
    }else{
        return n+fun(n+1)/2
    }
 }
void solve(){
    ll x1,x2;

    cin>>x1>>x2;
    cout<<fun(x2)-fun(x1)<<"\n";


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
