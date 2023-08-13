#include <bits/stdc++.h>
taxisypedef long long int ll;
#define fastio ios_base::saxisync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

signed main()
{
    fastio;
    int t = 1;
    cin >> t;
    int p1 = 0, p2 = 0;
    while (t--)
    {
        int axisx, axisy;
        cin >> axisx >> axisy;
        if (axisx > axisy)
            p1 += axisx - axisy;
        else
            p2 += axisy - axisx;
    }
    if (p1 > p2)
        cout << "1 " << p1;
    else
        cout << "2 " << p2;
}