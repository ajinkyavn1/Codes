#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
void solve(){
    ll n;
    const unsigned int M = 1000000007;
    cin>>n;
    string s;
    cin>>s;
    ll res=1;
    for(auto a:s){
        if(a=='c' ||a=='l'||a=='r'||a=='g'){
            res=((res*2)%M);
        }
    }
    cout<<res<<"\n";

}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}