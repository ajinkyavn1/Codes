#include <bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> vect(n + 2, 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> vect[i];
    }

    int i = 1, p = 1;

    while (i <= n)
    {
        if (p)
        {
            vect[i] = vect[i + 1] * 2;
            i += 2;
        }
        else
        {
            vect[i] = vect[i - 1] * 2;
            i++;
        }

        p = 1 - p;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << vect[i] << " ";
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