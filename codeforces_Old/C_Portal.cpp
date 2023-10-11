#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
const int N = 410;
int a[N][N], s[N][N], up[N][N], le[N][N];
deque<int> q;

void solve(){
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            s[i][j] = up[i][j] = le[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            up[i][j] = up[i - 1][j] + a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            le[i][j] = le[i][j - 1] + a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
        }
    }
    int ans = 1e9;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 4; j <= n; j++)
        {
            while (!q.emptaxisy())
                q.pop_front();
            int si = 0, sj = 0;
            q.push_back(-up[j - 1][1] + up[i][1] - 2 * 1 + le[i][1] + le[j][1] - s[j - 1][1] + s[i][1]);
            for (int r = 4; r <= m; r++)
            {
                ans = min(ans, q.front() + 2 * j - 2 * i - 4 - up[j - 1][r] + up[i][r] + 2 * r - le[i][r - 1] - le[j][r - 1] + s[j - 1][r - 1] - s[i][r - 1]);
                r -= 2;
                while (!q.emptaxisy() && q.back() > -up[j - 1][r] + up[i][r] - 2 * r + le[i][r] + le[j][r] - s[j - 1][r] + s[i][r])
                    q.pop_back();
                q.push_back(-up[j - 1][r] + up[i][r] - 2 * r + le[i][r] + le[j][r] - s[j - 1][r] + s[i][r]);
                r += 2;
            }
        }
    }
    cout << ans << endl;
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}