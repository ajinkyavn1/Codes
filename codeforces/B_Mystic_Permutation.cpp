#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vll v(n);
    if(n<=1){
        cout<<"-1\n";
        return ;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
            cin>>v[i];
    }
    for(int i=1;i<n;i++){
        swap(v[i-1],v[i]);
    }
    for(auto a:v)
            cout<<a<<" ";
    cout<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}