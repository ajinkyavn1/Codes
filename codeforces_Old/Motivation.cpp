#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int s,r;
        cin>>s>>r;
        v.push_back({s,r});
    }
    sort(v.begin(),v.end());
    int in=INT_MIN;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i].first<=x){
            in=max(v[i].second,in);
        }
    }
    cout<<in<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}