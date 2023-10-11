#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll len;cin>>len;
    string s;
    cin>>s;
    ll a = count(s.begin(), s.end(), 'A'), d = count(s.begin(), s.end(), 'D');
    if(a>d){
        cout << "Anton\n";
    }else if(d>a){
        cout << "Danik\n";
    }else   
        cout<<"Friendship\n";
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