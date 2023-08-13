#include <bits/stdc++.h>

typedef long long int ll;

#define vll vector<long long int>
using namespace std;

ll fact[21];
ll nCr(ll n, ll r)
{
    if (n == r)
        return 1;
    return fact[n] / (fact[r] * fact[n - r]);
}

int  fun(int num, vector<int> skills, int  minAssociates, int  minLevel, int  maxLevel)
{
    fact[1] = 1;
    for (int i = 2; i <= num; i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    int cnt = 0;
    for (auto i : skills)
    {
        if (i >= minLevel && i <= maxLevel)
        {
            cnt++;
        }
    }
    int res = 0;

    for (int i = minAssociates; i <= cnt; i++)
    {
        res += nCr(cnt, i);
    }
    return res;
}

signed main()
{
    ll n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll no, l, h;
    cin >> no >> l >> h;

    cout << fun(n, v, no, l, h);

    return 0;
}