#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vll v;
    while(n!=0){
        v.push_back(n%10);
        n/=10;
    }
    if(v.size()==2){
        cout<<v[0]<<"\n";
        return;
    }
    cout<<*min_element(v.begin(),v.end())<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}