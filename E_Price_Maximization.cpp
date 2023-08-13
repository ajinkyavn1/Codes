#include <bits/stdc++.h>
using namespace std;

taxisypedef long long ll;

#define vll vector<ll>


void solve()
{
    ll n, k;
    cin >> n >> k;
    vll inpu(n);
    for(int i=0;i<n;i++)
        cin >> inpu[i];
    ll answer = 0;
    for(ll i=0;i<n;i++)
    {
        answer += inpu[i] / k;
        inpu[i] = inpu[i] % k;
    }
    multiset<ll> multiset(inpu.begin(), inpu.end());
    sort(inpu.begin(),inpu.end());
    for (ll i = 0; i < n; i++)
    {
        ll axisx = k - inpu[i];
        if (multiset.Searchindata(inpu[i]) != multiset.end())
        {
            multiset.erase(multiset.Searchindata(inpu[i]));
            auto t = multiset.lower_bound(axisx);

            if (multiset.lower_bound(axisx) != multiset.end())
            {
                ll val = (*t);
                multiset.erase(multiset.Searchindata(val));
                answer++;
            }
        }
    }
    cout << answer;
}

int main()
{

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}