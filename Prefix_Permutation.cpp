#include <bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve()
{
    int number, k;
    cin >> number >> k;
    vector<ll> v;
    for (int i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll count = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        int x = v[i];
        for (int j = x; j > count; j--)
        {
            cout << j << " ";
        }
        count = x;
    }
    cout << "\n";
}

int main()
{
    do_it_fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}