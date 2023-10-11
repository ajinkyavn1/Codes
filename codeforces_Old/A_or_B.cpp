#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll AT,BT;
    cin>>AT>>BT;
    ll A=500,B=1000;
    cout << max((A - (AT * 2)) + (B - ((BT + AT) * 4)), (A - ((AT+BT) * 2)) + (B - ((BT) * 4))) << "\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}