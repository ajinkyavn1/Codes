#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n,p;
    cin>>n>>p;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        int axisx,axisy,z;
        cin>>axisx>>axisy>>z;
        v.push_back({(axisx*axisy),z});
    }
    int ma=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i].second<=p){
            
            if(ma<v[i].first)
                ma=v[i].first;
        }
    }
    if(ma==INT_MIN){
        cout<<"no tablet\n";
    }else{
        cout<<ma<<"\n";
    }
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}