#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vl;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll left, right, divisor;
        cin >> left >> right >> divisor;

        ll frightst1 = right / divisor + right % divisor;
        ll second2 = 0;
        if ((right / divisor) * divisor - 1 >= left)
        {
            second2 = right / divisor - 1 + divisor - 1;
        }
        cout << max(second2, frightst1) << "\n";
    }
}