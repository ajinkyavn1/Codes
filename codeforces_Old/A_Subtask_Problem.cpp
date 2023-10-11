#include <bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll test = 0;
    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            test++;
        }
    }
    if (test == n)
    {
        cout << 100 << "\n";
    }
    else
    {
        bool isf = true;
        for (int i = 0; i < m; i++)
        {
            if (v[i] == 0)
            {
                isf = false;
            }
        }
        if (isf)
        {
            cout << k<<"\n";
        }
        else
        {
            cout << "0\n";
        }
    }
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