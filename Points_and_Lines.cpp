#include <bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

signed main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> xax;
        set<int> yax;
        for (int i = 0; i <n; i++)
        {
            int x, y;
            cin >> x >> y;
            xax.insert(x);
            yax.insert(y);
        }
        cout << ((xax.size()) + (yax.size()))<<"\n";
    }
    return 0;
}