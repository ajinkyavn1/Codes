#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string s;
    cin>>s;
    if(set<char> (s.begin(),s.end()).size()==s.size()&&*max_element(s.begin(),s.end())==char(*min_element(s.begin(),s.end()))+s.size()-1){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}