#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll d=n/3;
    if (n % 3 == 0)
    {
        cout << d << " " << d + 1 << " " << d - 1 << "\n";
    }else
    if(n%3==1){
        cout<<d<<" "<<d+2<<" "<<d-1<<"\n";
    }else
    if(n%3==2){
        cout<<d+1<<" "<<d+2<<" "<<d-1<<"\n";
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
// 9
// 3 3 3
// 3 5  1