#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll X,A,B,C;
    cin>>X>>A>>B>>C;
    ll absum=  A + (B*(X-1));
    ll basum = B + (A * (X - 1));
    ll bcsum = B + (C * (X - 1));
    ll cbsum = C + (B * (X - 1));
    ll acsum = A + (C * (X - 1));
    ll casum = C + (A * (X - 1));
    ll ab=min(absum,basum);
    ll bc=min(bcsum,cbsum);
    ll ac=min(casum,acsum);

    cout<<min(ab,min(bc,ac))<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}