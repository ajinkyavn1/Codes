#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vll v(n);
    for (int  i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int Result=INT_MIN;
    for(int i=0;i<=n-k;i++){
        int axisx=0;
        for (int j = i; j < i + k;j++)
        {
            axisx+=v[j];
        }
        Result=maaxisx(Result,axisx);
    }
    cout<<Result<<"\n";
    
}


int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}