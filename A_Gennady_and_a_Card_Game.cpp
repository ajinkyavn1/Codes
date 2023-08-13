#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string s1,s2;
    cin>>s1;
    for(int i=0;i<5;i++){
        cin>>s2;
        if(s2[0]==s1[0]||s2[1]==s1[1]){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main(){
    do_it_fast;
    ll t=1; //cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}