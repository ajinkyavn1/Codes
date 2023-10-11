#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
   
        ll ans=1;
        ll prev=1;
        int sum=1;
        for(int i=2;i<n;i++){
            prev = i + prev;
            sum+=prev;
            if(sum>n){
                break;
            }
            ans++;
            
        }
        cout << ans;
}

int main(){
    do_it_fast;
    ll t=1;
    //  cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}
