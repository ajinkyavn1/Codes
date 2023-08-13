#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<pll> v;
    for(auto i=0;i<n;i++){
        ll x;cin>>x;
        v.push_back({x,i+1});
    }

    sort(v.begin(),v.end());
     ll days=0;
     ll cnt=0;
     vll res;
     for(int i=0;i<v.size();i++){
        days+=v[i].first;
        if(days<=k){
            cnt++;
            res.push_back(v[i].second);
        }else{
            break;
        
        }
     }
     cout << cnt << "\n";
  for(auto a:res)cout<<a<<" ";
     cout<<"\n";
}

int main(){
    do_it_fast;
    ll t=1;
    //  cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}