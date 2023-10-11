#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll pre=0;
    while(n--)
    {
        string s;
        cin >> s;
        if(s[0]=='+'||s[1]=='+')
            pre++;
        if(s[0]=='-'||s[1]=='-')
            pre--;
    }
    cout<<pre;
}

int main(){
    do_it_fast;
    ll t=1; 
    // cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}