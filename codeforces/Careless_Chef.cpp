#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int even=0,odd=0;
    for(int i=0;i<(2*n);i++){
        int t;
        cin>>t;
        if(t%2==0)
            even++;
        else    
            odd++;
    }
    if(odd%2==0 && even%2 ==0)
        cout<<"YES\n";
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