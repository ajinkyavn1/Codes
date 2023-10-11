#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int d,l,r;
    cin>>d>>l>>r;
    if(d>l &&d<r)
        cout << "Take second dose now\n";
    else if(d>r)
        cout << "Too Late\n";
    else if(d<r &&d<l)
        cout << "Too Early\n";
    else
        cout << "Take second dose now\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}