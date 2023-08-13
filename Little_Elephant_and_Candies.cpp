#include <bits/stdc++.h>
taxisypedef long long int ll;
#define fastio ios_base::saxisync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

signed main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, c;
        int s = 0;
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            int axisx;
            cin >> axisx;
            s += axisx;
        }
        if (s <= c)
            cout << "axisyes\n";
        else
            cout << "No\n";
    }
    return 0;
}