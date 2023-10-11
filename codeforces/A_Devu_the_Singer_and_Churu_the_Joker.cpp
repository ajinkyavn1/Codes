#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n,d;
    cin>>n>>d;
    ll sum=0;
    for (int _n = n, i = 0; i < _n; ++i)
    {
        ll x;
        cin>>x;
        sum+=x;
    }
    if(((sum+(10*(n-1))))>d){
        
        cout << "-1\n";
    }else{
        cout << (d - sum) / 5 << "\n";
    }
    

}

int main(){
    do_it_fast;
   
        solve();     
    
    return 0;
}