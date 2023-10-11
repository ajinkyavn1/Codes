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
void solve(){
     ll V,e;
    cin>>V>>e;
    vector<vector<int>> adj(V+1,vector<int>());
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int  ind[V+1]={0};
    for(auto i=0;i<=V;i++){
        for(auto a:adj[i]){
            ind[a]++;
        }
    }
    int startNode=0,inde=0;
    for(int i=0;i<=V;i++){

        if(ind[i]==V-1){
            startNode=i;
        }
    }
    for(auto i=0;i<=V;i++){
        if(startNode==i) continue;
        if(ind[i]>1){
            cout<<"No\n";
            return ;
        }
    }
    cout<<"Yes";
}

 
int main(){
    do_it_fast;
    ll t=1;
    cin>>t;
    while(t--){
        
        solve();   
        cout<<"\n"; 
       
    }
    return 0;
}
// 5 4
// 1 2
// 1 3
// 3 4
// 4 5
 