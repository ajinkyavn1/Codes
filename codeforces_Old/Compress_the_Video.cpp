#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vll v(n);
    for(auto &a:v) cin>>a;
    int count=1;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1])
            count++;
    }
    cout<<count<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}