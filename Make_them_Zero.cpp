#include <bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vll v(32, 0);
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int x;
        cin >> x;
        while (x != 0)
        {
            if (v[j] == 0)
                v[j] = x % 2;
            x = x / 2;
            j++;
        }
    }
    int ans = 0;
    for (auto a : v)
    {
        ans = ans + a;
    }
    cout << ans << "\n";
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