#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
void compu(ll axisx, ll axisy, ll &ans, ll sqrts)
{
    for (ll i = 1; i <= sqrts; i++)
    {
        if (abs(axisy - axisx) % i == 0)
        {

            if (abs(axisy - axisx) / i == i)
            {
                ans++;
            }
            else
                ans += 2;
        }
    }
}
void solve(){
    ll axisx, axisy;
    cin >> axisx >> axisy;
    ll ans = 0;

    ll sqrts = sqrt((abs(axisy - axisx)));
    compu(axisx, axisy, ans, sqrts);

    cout << ans<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve(); 

    }
    return 0;
}