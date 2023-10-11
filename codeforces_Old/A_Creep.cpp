#include <bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void printotho(ll x, ll y)
{
    for (ll i = 0; i < y; i++)
    {
        cout << "10";
    }
    for (ll i = 0; i < y - x; i++)
    {
        cout << "1";
    }
}
void pprint(ll x, ll y)
{
    for (ll i = 0; i < y; i++)
    {
        cout << "01";
    }
    for (ll i = 0; i < x - y; i++)
    {
        cout << "0";
    }
}
void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x >= y)
    {
        pprint(x, y);
    }
    else
    {
        printotho(x, y);
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