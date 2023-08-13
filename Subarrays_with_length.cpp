#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define vlli vector<vector<long long int>>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin >> n;
   ll ans = (ll)n * (n + 1) / 2; 
     vlli vect(n + 1, vector<ll>(1, -1));
     for (ll i = 0; i < n; i++)
     {
         ll x;
         cin >> x;
         vect[x].push_back(i);
    }
    for (ll i = 1; i <= n; i++) 
    {
        vect[i].push_back(n);
        for (ll j = 1; j < (ll)vect[i].size(); j++)
        {
            ll left = vect[i][j] - vect[i][j - 1] - 1;
            ans -= max(0LL, left - i + 1);
        }
    }
    cout << ans << '\n';
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}