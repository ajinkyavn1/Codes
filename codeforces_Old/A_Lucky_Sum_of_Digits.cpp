#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    string s="";
    while(n>0&&n%7!=0){
        n-=4;
        s.push_back('4');
    }
    while(n>0&&n%7==0){
        n-=7;
        s.push_back('7');
    }
    if(n==0){
        cout<<s;
    }else{
        cout<<"-1";
    }
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