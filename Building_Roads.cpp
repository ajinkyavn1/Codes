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
bool vis[100001];
vll  adj[100001];
void dfs(int n){
    vis[n]=1;
    for(auto a:adj[n]){
        if(!vis[a])
            dfs(a);
    }
}
void solve(){
    ll n,m;
    ll u,v;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
       
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vll res;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){    
            dfs(i);
            res.push_back(i);
        }
    }
    cout<<res.size()-1<<"\n";
    for(int i=1;i<res.size();i++){
        cout<<res[i-1]<<" "<<res[i]<<"\n";
    }

}
 
int main(){
    do_it_fast;
    ll t=1;
    while(t--){
        solve();     
    }
    return 0;
}
