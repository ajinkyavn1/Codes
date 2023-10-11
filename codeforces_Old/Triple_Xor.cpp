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
ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a);}
int mod = 1e9+7;
long long getpower(ll number1 , ll number){
 if(number == 0)
     return 1;
 if(number1 ==0 || number1 == 1||number==1)
     return number1;
  

    ll result = getpower(number1 ,number/2 );

    result = (result *result);
    if(number%2){
        result =  (result*number1);
    }
   return result;
}

void solve(){
    ll x1 , y1 ;
    string str;
    cin>>x1>>y1;
    cout<<( getpower(4 , x1) - 3*(getpower(2, x1)-1) -1)<<"\n";
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
