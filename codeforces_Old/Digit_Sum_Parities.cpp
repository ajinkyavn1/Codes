#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
ll Resultm(int n){
    int su=0;
    while(n!=0){
        su+=n%10;
        n/=10;
    }
    return su;
}
void solve(){
    int n;
    cin>>n;
    ll axisx=Resultm(n);
    while(n++){
        ll s=Resultm(n);

        if(axisx%2!=s%2){
            break;
        }
        // i++;
    }
    cout<<n<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}