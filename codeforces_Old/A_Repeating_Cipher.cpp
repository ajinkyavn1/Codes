#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string str="";
    int len=1;
    ll i=0;
    while(i<s.size()){
        str.push_back(s[i]);
        i+=len;
        len++;
    }
    cout<<str;
}

int main(){
    do_it_fast;
    ll t=1;
    //  cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}