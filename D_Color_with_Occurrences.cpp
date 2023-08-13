#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define vvl vector< vector<long long int>>
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
vector<vector<pll>> done;
vll dp;


ll fun(ll idx, string &s, vector<string> &v, vvl &starts){
    if(idx == s.size()){
        return 0;
    }
    if(idx > s.size())return INT_MAX;
    if(dp[idx] != -1)return dp[idx];

    ll mn = INT_MAX;
    vector<pll> path;
    ll chosen = -1;
    for(auto i : starts[idx]){
        
        for(ll j=idx + 1; j <= idx + v[i].size(); j++){
            
            ll x = fun(j, s, v, starts);
            if(x < mn){
                mn = x;
                path = done[j];

                chosen = i;
            }
        }
    }
    if(mn == INT_MAX)return mn;

    path.push_back({idx, chosen});
    done[idx] = path;
    

    return dp[idx] = mn + 1;
}

void PerformOp(){

    string s; cin >> s;
    ll n; cin >> n;
    vector<string> v(n);
    for(auto &i : v)cin >> i;

    dp.assign(105, -1);
    done.assign(105, vector<pll>());

    vector<vll> match(n, vll());
    ll idx = 0;
    for(auto x : v){
        for(ll i=0; i<s.size(); i++){
            bool ok = 0;
            for(ll j=0; j<x.size(); j++){
                if(j + i >= s.size()){
                    break;
                }

                if(s[i+j] != x[j])break;

                if(j == x.size()-1)ok = 1;
            }
            if(ok)match[idx].pb(i);
        }
        idx++;
    }

    vector<vll> starts(s.size(), vll());

    for(ll i=0; i<n; i++){
        for(auto j : match[i]){
            starts[j].pb(i);
        }
    }

    ll res = fun(0, s, v, starts);
    if(res == INT_MAX){
        cout << -1 << "\n";
        return;
    }

    cout << res;
    cout << endl;
    for(auto i : done[0]){
        cout << i.second + 1 << " " << i.first+ 1 << endl;
    }

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        PerformOp();
    }
}