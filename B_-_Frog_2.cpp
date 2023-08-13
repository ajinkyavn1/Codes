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
int solve(ll n,vll &vect,ll &k,vll &dp){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    ll ma=INT_MAX;
    for(auto i=1;i<=k;++i){
        if(n-i>=0){
             ma=min(ma,solve(n-i,vect,k,dp)+abs(vect[n]-vect[n-i]));
        }
       
    }
    return dp[n]=ma;
}
int main(){
    do_it_fast;
    ll t=1;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vll vect(n);
        vll dp(n+5,-1);
        for(auto &a:vect) cin>>a;
        //cout << solve(n-1, vect, k, dp);
        // cout<<solve(n-1,vect,k,dp);
    }
    return 0;
}
