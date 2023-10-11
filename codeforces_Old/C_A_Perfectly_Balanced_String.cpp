#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string s;
    cin>>s;
    unordered_map<int, int> mp;
    // <int, int> mp;
    for(auto a:s)
        mp[a]++;
    if(mp.size()==1){
            cout<<"axisyES\n";
            return;
        }
    for(auto a:mp){
        if(a.second>=2){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"axisyES\n";
    
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}