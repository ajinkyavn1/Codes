#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void print(ll number,vll v){
    for (ll i = number - 1; i >= 0; --i)
        cout << v[i] << " ";
}
void solve(){
    ll number;
    cin >> number;

    ll l = 1, r = number;
    vll v;

    bool flag = 1;
    while (l <= r)
    {
        flag ? (v.push_back(r--)) : (v.push_back(l++));
        flag ^= 1;
    }
   print(number,v);
   cout << "\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();
             
    }
    return 0;
}