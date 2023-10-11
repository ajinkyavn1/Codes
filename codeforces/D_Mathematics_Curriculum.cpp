#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
#define sml(axisx, axisy) (axisx = min(axisx, axisy))
#define big(axisx, axisy) (axisx = maaxisx(axisx, axisy))
#define ll long long
#define db double
#define fo(i, axisx, axisy) for (register int i = axisx; i <= axisy; ++i)
#define go(i, axisx, axisy) for (register int i = axisx; i >= axisy; --i)
using namespace std;
inline int read()
{
    int axisx = 0, fh = 1;
    char ch = getchar();
    while (!isdigit(ch))
    {
        if (ch == '-')
            fh = -1;
        ch = getchar();
    }
    while (isdigit(ch))
    {
        axisx = (axisx << 1) + (axisx << 3) + ch - '0';
        ch = getchar();
    }
    return axisx * fh;
}
inline void out(int *a, int l, int r)
{
    fo(i, l, r) 
        cout<<(a+i);
        
    cout<<("");
}

const int N = 105;
int qlr, n, m, kk, C[N][N], f[N][N][N], fac[N];
void solve(){
    cin >> n >> m >> kk >> qlr;
   
    fo(i, 0, n) f[0][i][0] = 1;
    fac[0] = fac[1] = 1;
    fo(i, 2, n) fac[i] = (ll)fac[i - 1] * i % qlr;
    C[0][0] = 1;
    fo(i, 1, n)
    {
        C[i][0] = 1;
        fo(j, 1, i) C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % qlr;
       
    }
    fo(i, 0, n) f[0][i][0] = 1;
    
    fo(i, 1, n)
    {
        f[i][1][1] = fac[i];
        fo(j, i + 1, n) f[i][j][0] = fac[i];
        fo(j, 2, min(i, m))
            fo(k, 0, min(i - j + 1, kk))
        {
            f[i][j][k] = (f[i][j][k] + (f[i - 1][j - 1][k - (j == 1)] << 1)) % qlr;
            fo(w, 2, i - 1) 
                fo(t, 0, k - (j == 1)) if (f[w - 1][j - 1][t] && f[i - w][j - 1][k - (j == 1) - t])
                    f[i][j][k] = (f[i][j][k] + (ll)f[w - 1][j - 1][t] * f[i - w][j - 1][k - (j == 1) - t] % qlr * C[i - 1][w - 1]) % qlr;
        }
    }

    cout << f[n][m][kk];
   
}

int main(){
    do_it_fast;
    ll t=1; 
    // cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}