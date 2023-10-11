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
bool binaryserc(vll v,ll k){
    ll lo=0,hi=v.size()-1;

    while(lo<=hi){
        ll mid=lo+(hi-lo)/2;
        if(v[mid]==k)
        {
            return 1;
        }
        if(v[mid]<k){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    return 0;
}
void solve(){
    ll n,k;
    vll v;
    cin>>n>>k;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    while(k>0){
        ll x;
        cin>>x;
        if(binaryserc(v,x)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        k--;
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
