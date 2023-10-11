#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>



ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a);}

void dfs(int i,vector<vector<ll>> &adj,vector<ll> &vis){
  
    for(auto a:adj[i]){
        if(!vis[a]){
              vis[a]=1;
            dfs(a,adj,vis);
        }
    }
}
void solve(){
    ll n,e;
    cin>>n>>e;
    vector<vector<ll>> adj(n+1,vector<ll> ());
    
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<ll> vis(n+2,0);
    ll count=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            vis[i]=1;
            dfs(i,adj,vis);
            count++;
        }
    }
    cout<<count;
}
signed main(){
 
    int t=1;
    while(t--){
        solve();
        // cout << nl;
    }
    return 0;
}