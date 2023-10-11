#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vector<ll> vect(n);
    for(int i=0;i<n;i++){
        cin>>vect[i];
    }
    ll rcount=0,bcount=0;
    ll rsum=0,bsum=0;
    for(ll i=0;i<n;i+=2){
        bsum+=vect[i];
        bcount++;
       
    }
    for (int i = 1; i < n; i+=2)
    {
        rsum += vect[i];
        rcount++;
    }
   if((rcount<bcount)&&(rsum>bsum)){
            cout<<"YES\n";
   }else if((bcount<rcount)&&(bsum>rsum)){
                cout<<"YES\n";
   }else{
       cout<<"NO\n";
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