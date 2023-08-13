#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vll v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    ll axisx=v[0];
    for(int i=1;i<n;i++){
        axisx = __gcd(axisx,v[i]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]/axisx<<" ";
    }
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