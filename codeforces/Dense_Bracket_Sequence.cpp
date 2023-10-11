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
void prefixsum(int n,string ip,vll &pref){
    for(ll i=0;i<n;i++){
        if(ip[i]=='(')
            pref[i]++;
        if(i>0){
            pref[i]=pref[i]+pref[i-1];
        }
    }
}

ll sufixsum(int n,string ip,vll &suff,vll &pref,ll &result){
     prefixsum(n,ip,pref);
    for(ll i=n-1;i>=0;i--){
        if(ip[i]==')')
        suff[i]++;
        if(i<n-1){
             suff[i]=suff[i]+suff[i+1];
        }
        result=min(result,n-2*(min(pref[i],suff[i])));
    }
    return result;
}
void solve(){
    ll len ;
    cin>>len;
    string ip;
    cin>>ip;
    vll pref(len,0),suff(len,0);
   ll res=len+1;
    cout<<(sufixsum(len,ip,suff,pref,res))<<"\n";

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
