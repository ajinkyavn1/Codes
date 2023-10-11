#include<bits/stdc++.h>
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
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
 vll e,o;

   for(int i=0;i<n;i++){
    int c;
    cin>>c;
        if(i%2==0){
            e.pb(c);
        }else{
            o.pb(c);
        }
   }
    bool f1=1,f2=1;

    for(int i=1;i<e.size();i++){
        if(e[i]%2!=e[i-1]%2){
            f1=0;
            break;
        }
    }
    for(int i=1;i<o.size();i++){
        if(o[i]%2!=o[i-1]%2){
            f2=0;
            break;
        }
    }
    if(f1&&f2){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

int main(){
    
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}