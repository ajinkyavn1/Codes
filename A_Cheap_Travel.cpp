#include <bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if ((m* a) <= b)
    {
        cout << n * a << "\n";
    }else{
        ll x = min((n % m) * a, b);
        cout<< ((n / m) * b)+x;
    }
}

int main()
{
    do_it_fast;
    ll t = 1; // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}