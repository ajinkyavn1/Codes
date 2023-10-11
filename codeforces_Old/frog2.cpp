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
int backtrack(vll &v,int n,vll &dp,int k){
    if(dp[n]!=-1) return dp[n];
    if(n==0){
        return dp[n]=0;
    }

    int step1=INT_MAX,step2=INT_MAX;
    for(int i=1;i<=k;i++){
    
        if(n-i>=0){
            step2=abs(v[n-i]-v[n])+backtrack(v,n-i,dp,k);
        }
        step1=min(step1,step2);
    }

    return dp[n]=step1;
}
void solve(){
    ll n=0,k=0;
    cin>>n>>k;
    vll v(n);
    for(auto &i:v)cin>>i;
    if(n==0){
        cout<<0;
        return;
    }
    vll dp(n+1,-1);
   cout<< backtrack(v,n-1,dp,k);
}
 
int main(){
    do_it_fast;
    ll t=1;
    while(t--){
        solve();     
    }
    return 0;
}
