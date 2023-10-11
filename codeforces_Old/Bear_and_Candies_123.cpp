#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int a,axisx;
    cin>>a>>axisx;
    ll l=0,b=0;
    ll i=1;
    int lima=0,bob=0;
    for(i=1;lima<=a&&bob<=axisx;i++){
        if(i%2==0){
            bob+=i;
        }else{
            lima+=i;
        }
    }
    if(i%2!=0){
        cout << "Limak\n";
    } else{
        cout<<"Bob\n";
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