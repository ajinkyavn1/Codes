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
vector<pll> precomute(ll x, ll y){
    vector<pll> ans;
    if(x+1 < 9 && y+2 < 9)ans.pb({x + 1, y + 2});
    if(x-1 > 0 && y+2 < 9)ans.pb({x - 1, y + 2});
    if(x+1 < 9 && y-2 > 0)ans.pb({x + 1, y - 2});
    if(x-1 > 0 && y-2 > 0)ans.pb({x - 1, y - 2});

    if(x+2 < 9 && y+1 < 9)ans.pb({x + 2, y + 1});
    if(x-2 > 0 && y+1 < 9)ans.pb({x - 2, y + 1});
    if(x+2 < 9 && y-1 > 0)ans.pb({x + 2, y - 1});
    if(x-2 > 0 && y-1 > 0)ans.pb({x - 2, y - 1});
    return ans;
}
void solve(){
    ll x,y,x2,y2;
    cin>>x>>y>>x2>>y2;
    vector<pll> ans= precomute(x, y), res2 = precomute(x2, y2);

    for(auto i=0;i<ans.size();i++){
        for(auto j=0;j<res2.size();j++){
            if(ans[i]== res2[j]){
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";


}
 
int main(){
    do_it_fast;
    ll t=1;
    cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}

