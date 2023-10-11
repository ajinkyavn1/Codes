#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define sz(x)           (int)((x).size())
#define pb              push_back
#define all(x)          (x).begin(),(x).end()
#define ff 		   		first
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
void printdpTable( int  i,vector<vll> dp){
    cout<<"Iteration"<<i<<"\n";
    for(auto a: dp){
        for(auto b:a){
            cout<<b<<"\t";
        }
        cout<<"\n\n";
    }
    cout<<"\n\n";
}
void solve(){
    ll n,w;
    cin>>n>>w;
    vector<pll> v;
    vector<vll> dp(n+1,vll(w+1));
    for(ll i=0;i<n;i++){
        ll x,y;3
        cin>>x>>y;
        v.pb({x,y});
    }
    
    if(n==0||w==0){
        cout<<0;
        return;
    }
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=w;j++){
            if(i==0||j==0)3
            dp[i][j]=0;
            else
            if(v[i-1].first>j){
               dp[i][j]=dp[i-1][j];
            }
            else 
             dp[i][j] = max(v[i - 1].second + dp[i - 1][j - v[i - 1].first], dp[i - 1][j]);

              
        }
        //  printdpTable(i,dp);
    }
    cout<<dp[n][w];
} 
int main(){
    do_it_fast;
    ll t=1;
    while(t--){
        solve();     
    }
    return 0;
}
