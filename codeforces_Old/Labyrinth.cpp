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
const ll dx[4] = { -1, 1, 0, 0};
const ll dy[4] = {0, 0, -1, 1};
const char dir[4]={'U','D','L','R'};

int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
const long long INF=1e18;
const long long N=200005;
const long long mod=1000000007;
ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a);}

bool isvalid(ll nx,ll ny,ll n,ll m){
    if(nx>=0&&nx<n&&ny>=0&&ny<m) return 1;
return 0;
}
char get(int incx, int incy){
    char ch ;
    if(incx == 1){
        ch = 'D';
    }
    else if(incx == -1){
        ch = 'U';
    }
    else if(incy == 1){
        ch = 'R';
    }
    else{
        ch = 'L';
    }
    return ch;
}
void solve(){
    ll n,m;
    cin>>n>>m;
   vector<vector<char>> adj(n,vector<char>(m));
   vector<vector<bool>> vis(n,vector<bool>(m,0));
   vector<vector<pair<int,int>>> dp(n,vector<pair<int,int>>(m,{0,0}));

   ll sx,sy,ex,ey;
   for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>adj[i][j];
            if(adj[i][j]=='A'){
                sx=i,sy=j;
            }
            if(adj[i][j]=='B'){
                ex=i,ey=j;
            }
        }
   }
   queue<pair<ll,ll>>q;
   q.push({sx,sy});
   
   bool notfound=1;
   while(!q.empty()){
     ex=q.front().first;
     ey=q.front().second;
     q.pop();

     for(ll i=0;i<4;i++){
        ll nx=dx[i]+ex;
        ll ny=dy[i]+ey;
       int x=dx[i];
       int y=dy[i];

        if(isvalid(nx,ny,n,m)&&vis[nx][ny]==0&& adj[nx][ny]!='#'){
        
                 vis[nx][ny]=1;
                 dp[nx][ny]={x,y};
                q.push({nx,ny});
        
        
            if(adj[nx][ny]=='B'){
                
                string path="";
            
            while(!(nx==sx&&ny==sy)){
                    path+=get(dp[nx][ny].first,dp[nx][ny].second);
                    auto c=dp[nx][ny];
                    nx-=c.first;
                    ny-=c.second;
                }
                reverse(all(path));
                cout<<"YES\n"<<path.size()<<"\n"<<path;
                return;
            }
        }
     }
   }
    if(notfound)
        cout<<"NO";
}
 
int main(){
    
        solve();     

    return 0;
}
