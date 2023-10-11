#include <bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve()
{
    int m, n;
    cin >> m >> n;
    bool ldown = true;
    for (int i = 1; i <= m; i++)
    {
        if (i % 4 == 2)
        {

            for (int j = 0; j < n - 1; j++)
            {
                cout << ".";
            }
            cout << "#";
        }
        else if (i % 4 == 0)
        {
            cout << "#";
            for (int j = 0; j < n - 1; j++)
            {
                cout << ".";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                cout << "#";
            }
        }
        cout << "\n";
    }
}

int main()
{
    do_it_fast;
    ll t = 1;
    //  cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}