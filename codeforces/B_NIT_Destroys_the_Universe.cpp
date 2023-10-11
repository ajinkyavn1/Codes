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
///                 u   d  l  r
const int dx[4] = { -1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
const long long INF=1e18;
const long long N=200005;
const long long mod=1000000007;
ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a);}
void solve(){
    ll len;
    cin>>len;
    vll v(len);
    for(auto &i:v)cin>>i;
    map<ll,ll> mp;
    ll s=0;
    if(len<=1){
        cout<<(v[0]==0?0:1)<<"\n";
        return;
    }
   for(ll i=0;i<len-1;i++){
        if(v[i]==0&&v[i+1]!=0||v[i]!=0&&v[i+1]==0){
            s++;
        }
        if(s>=3){
            s=2;
        }
     
   }
   s=(s==1?1:2);
   cout<<s<<"\n";    
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
