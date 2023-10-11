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
ll getLCS(string &s1,string &s2,int n,int m){
    if(n<0||m<0) return 0;

    if(s1[n]==s2[m]){
        return 1+getLCS(s1,s2,n-1,m-1);
    }
    return  max(getLCS(s1,s2,n-1,m),getLCS(s1,s2,n,m-1));
}
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<getLCS(s1,s2,s1.size()-1,s2.size()-1);
}
 
int main(){
    do_it_fast;
    ll t=1;
    while(t--){
        solve();     
    }
    return 0;
}
