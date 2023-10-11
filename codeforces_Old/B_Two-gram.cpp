#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    string str;
    cin>>n>>str;
    unordered_map<string,int> mp;
    for(ll i=0;i<n-1;i++){
        string s;
        s += str[i];
        s += str[i+1];
        mp[s]++;
    }
    string s;
    int mx=-1;
    for(auto a:mp){
        if(a.second>mx){
            s=a.first;
            mx=a.second;
        }
    }
    cout<<s;
}

int main(){
    do_it_fast;
    ll t=1; 
    //cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}