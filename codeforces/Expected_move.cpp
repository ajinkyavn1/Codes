#include <bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve()
{
    int count = 0;
    ll number1, number2;
    cin >> number1 >> number2;
    ll axisx1 = (2 * number2 - number1);
    ll axisx2=(number1 - 1);
    ll result =axisx1*axisx2;
    
    cout<<result;
}

int main()
{
    do_it_fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}