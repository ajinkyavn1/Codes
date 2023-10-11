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
int ninjaTrainings(int n,vector<vll>  &points,int k
 ,vector<vector<int>> &dp){

  if(dp[n][k]!=0){
      return dp[n][k];
  }
  if(n==0){
        ll ma=INT_MIN;
        for(int i=0;i<3;i++){
            if(i!=k)
                ma=max(points[0][i],ma);
        }
        return dp[n][k]=ma;
    }
    ll ma=INT_MIN;
    for(int i=0;i<3;i++){
        if(i!=k)
        {
            ll x=points[n][i]+ninjaTrainings(n-1,points,i,dp);
            ma=max(x,ma);
        }
    }
   
    return dp[n][k]=ma;   
}
void solve(){
    ll n=0,k=0;
    cin>>n;
    vector<vll> v(n,vector<ll>(3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int>> dp(n+1,vector<int>(5,0));
   cout<< ninjaTrainings(n-1,v,3,dp);
}
 
int main(){
    do_it_fast;
    ll t=1;
    while(t--){
        solve();     
    }
    return 0;
}
