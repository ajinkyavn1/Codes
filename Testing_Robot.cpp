#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_map<int,int> mp;
    mp[k]++;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R')
            mp[++k]++;
        else{
            mp[--k]++;
        }
        
    }
    cout<<mp.size()<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}