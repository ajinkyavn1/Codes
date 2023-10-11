#include <bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll count=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4' ||s[i] == '7')
        {
            count++;
            // break;
        }
    }
    if (count==4||count==7)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    do_it_fast;
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}