#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string s;
    cin>>s;
    while (s.size()&&s.back()=='0')s.pop_back();
    reverse(s.begin(),s.end());
    while (s.size()&&s.back()=='0')s.pop_back();
    int res=0;
    for(auto a:s)
        if(a=='0') res++;

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