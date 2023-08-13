#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    int ans=INT_MAX;
    for(int i=0;i<=ceil(n/100.0);i++){
        int c=max((double)0,ceil((n-i*100)/4.0));
        int smoke=i*x+c*y;
        ans=min(ans,smoke);
    }
    cout<<ans<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}