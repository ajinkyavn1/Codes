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
bool vis [200005];

ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a);}
void solve(){
    ll n,m;
    cin>>n>>m;
    memset(vis, false , sizeof vis);
    vector<pair<int,int>> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[i].pb({v,w});
        //  adj[v].pb({u,w});
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    vector<int> dis(n+1,INT_MAX);
    dis[1]=0;
    // pq.push({0,1});
    // while(!pq.empty()){
    //     int w=pq.top().first;
    //     int v=pq.top().second;
    //     pq.pop();
    //     for(auto a:adj[v]){
    //         int nv=a.first;
    //         int wt=a.second;
    //         if(dis[nv]>w+wt){
    //             dis[nv]=w+wt;
    //             pq.push({dis[nv],nv});
    //         }
    //     }
    // }
    // for(int i=2;i<=n;i++){
    //     cout<<dis[i]<<" ";
    // }
    for(int i=1;i<n;i++){
        int j=0;
        while(adj[j].size()!=0){
             int nv=adj[j].first;
            int wt=adj[j].second;
            if(dis[nv]>)
        }
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
