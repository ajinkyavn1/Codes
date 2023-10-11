#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>
#define sz(x) (int)((x).size())
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second
#define pll pair<long long int, long long int>
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int>>
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int YY[] = {-1, 0, 1, -1, 1, -1, 0, 1};
const long long INF = 1e18;
const long long N = 200005;
const long long mod = 1000000007;
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
float area(float r)
{
    return (3.14 * r * r);
}
float area(float b, float h)
{
    return (0.5 * b * h);
}
float areaR(float l, float b)
{
    return (l * b);
}
 void solve()
{

    int ch;
   
    cin >> ch;
    switch (ch)
    {
    case 5:
    {
        float r;
        cin >> r;
        cout << area(r);
        break;
    }
    case 2:
    {
       
        float h,b;
        cin >> b >> h;
        cout << area(b, h);
        break;
    }
    case 1:
    {
        float l,b;
        cin >> l >> b;
        cout  << areaR(l, b);
        break;
    }
    case 3:{
        float l,b;
        cin >> l >> b;
        cout<<22/7 *(l*b)<<"\n";
        
        break;
    }
    case 4:
    {
        float side;
        cin>>side;
        cout<<side*side<<"\n";
    }
   
    }
}

int main()
{
    do_it_fast;
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
