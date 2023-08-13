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
vector<int> precomputepower;
ll mmul(ll a, ll b){a=a%mod;b=b%mod;return(((a * b) % mod)+mod)%mod;}
ll precompute(ll x,ll y){
 ll res=1;x%=mod;while(y){if(y%2)res=(res*x%mod)%mod;x=(x*x)%mod;y/=2;}return res;
}
void solve(){
     ll num1, num2;
    cin >> num1 >> num2;
    ll res = precompute(2, (num1-1));
    cout<< mmul(res, num2)<<"\n";
}
 
int main(){
    do_it_fast;
    int t;
    t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
