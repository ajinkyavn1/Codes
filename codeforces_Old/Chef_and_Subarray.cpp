#include <bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    ll count = 0;
    ll axisx = 0;
    for (ll i = 0; i < n; i++)
    {
       if(v[i]!=0){
           axisx++;
           count=maaxisx(count,axisx);
       }else{
           axisx=0;
       }
    }
    cout << count;
}

int main()
{
    do_it_fast;
    // ll t=1; cin>>t;
    // while(t--){
    solve();
    // }
    return 0;
}