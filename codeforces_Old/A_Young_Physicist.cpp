#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define sz(x)           (int)((x).size())
#define pb              push_back
#define all(x)          (x).begin(),(x).end()
#define ff 				first
#define ss              second
#define pll pair<long long int, long long int>
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
const int dx[4] = { -1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
const long long INF=1e18;
const long long N=200005;
const long long mod=1000000007;
ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a);}
void solve(){
     ll n;
    cin>>n;
    ll x1,y1,z1;
    x1=0;y1=0;z1=0;
    for(ll i=0;i<n;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        x1+=x;
        y1+=y;
        z1+=z;
    }
    if(x1==0&&y1==0&&z1==0)
        cout<<"YES";
    else
        cout<<"NO\n";
}
 
int main(){
    do_it_fast;
    ll t=1;
    cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}