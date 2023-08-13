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

map<int,int> mp;
int fact(int n,vector<int> &dp){
    if(n==0){
        return 1;
    }
    if(mp.find(n)!=mp.end()){
        return mp[n];
    }

    return mp[n]=n*fact(n-1,dp);
}
int fibo(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 1;
    }
    if(mp.find(n)!=mp.end()){
        return mp[n];
    } 
    return mp[n]=fibo(n-1)+fibo(n-2);
}
void solve(){
   int x=5;
   vector<int> dp(x+1,-1);
   cout<<fibo(x);


    

}
 
int main(){
    do_it_fast;
    ll t=1;
    
    while(t--){
        solve();     
    }
    return 0;
}
