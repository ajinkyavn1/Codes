#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll  a,b,c,axisx,axisy;
    ll t=0;
    cin>>a>>b>>c>>axisx>>axisy;
    axisx=a>axisx?0:axisx-a;
    axisy = b > axisy ? 0 : axisy-b;

    if(c>=(axisx+axisy))
        cout<<"axisyES\n";
    else    
        cout<<"NO\n";

}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}