#include <bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve()
{
    ll n;

    cin>>n;
    vector<long long> v(n);
    
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i=0,j=v.size()-1;
    while(j>=0&&v[j])
        j--;
    while(i<v.size()&&v[i])
        i++;
    if(j<=0)
        cout<<"0\n";
    else
         cout << j-i+2<< "\n";
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