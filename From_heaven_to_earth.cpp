#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    double n,v1,v2;
    cin>>n>>v1>>v2;

    if((n*sqrt(2)/v1)>(2*n/v2)){
        cout << "Elevator\n";
    }else{
        cout << "Stairs\n";
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