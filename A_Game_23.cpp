#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll x,y;
    cin>>x>>y;
    ll result=-1;
    if(y%x==0){
       
        result=0;
        ll m = y / x;
        while(m%2==0){
            result++;
            m/=2;
        }
        while (m % 3 == 0)
        {
            result++;
            m /= 3;
        }
        if(m!=1)
            result=-1;  
    }
    cout << result;
   
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