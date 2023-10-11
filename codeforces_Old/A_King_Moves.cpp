#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string k;
    cin>>k;
    cout<<((3 - (k[0] == 'a' || k[0] == 'h')) * (3 - (k[1] == '1' || k[1] == '8')) - 1);
}
int main(){
    do_it_fast;
    ll t=1;
    while(t--){
        solve();     
    }
    return 0;
}