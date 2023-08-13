#include <bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

bool checkisavail(int x, int y)
{
    return x - 1 == y;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    if (checkisavail(n, k))
    {
        cout << n << " ";
        for (int i = 1; i < k; i++)
        {
            cout << (i + 1) << " ";
        }
        cout << 1 << "\n";
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            cout << i + 1 << " ";
        }
        for (int i = k; i < n - 1; i++)
        {
            cout << i + 2 << " ";
        }
    }
    if (k != n)
        cout << k + 1 << " ";
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