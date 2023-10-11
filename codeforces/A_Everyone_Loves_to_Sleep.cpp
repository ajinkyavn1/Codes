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
void process( map<pll, ll> map,ll hr,ll mi){
     ll count = 0;
    while(map[{hr, mi}] == 0){
        mi++;
        count++;
        if(mi == 60){
            mi = 0;
            hr++;
        }
        if(hr == 24){
            hr = 0;
        }
    }

    cout <<( count / 60 )<< " " << (count % 60)<<"\n";
}
void solve(){
     ll number, hr, mi;
    cin >> number >> hr >> mi;

    vector<pll> v(number);
    for(ll i=0; i<number; i++)
        cin >> v[i].first >> v[i].second;

    map<pll, ll> map;
    for(auto i : v){
        map[{i.first, i.second}] = 1;
    }

   process(map,hr,mi);
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
