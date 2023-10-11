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
    ll x;
    cin>>x;
    vll ans(3,0);
    for(auto i=0;i<x;i++){
        ll t;
        cin>>t;
        if(i%3==0)
            ans[0]+=t;
        else if(i%3==1)
                ans[1]+=t;
        else
            ans[2]+=t;
    }
   ll ma=*max_element(ans.begin(),ans.end());
    if(ma==ans[0])
            cout<<"chest";
    else if(ma==ans[1])
            cout<<"biceps";
    else
                cout<<"back";
}
 
int main(){
    do_it_fast;
    ll t=1;
    while(t--){
        solve();     
    }
    return 0;
}
