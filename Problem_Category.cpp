#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n>=1 && n<100){
        cout<<"Easy\n";
    }else 
        if(n>=100 &&n<200)
            cout<<"Medium\n";
    else
        cout<<"Hard\n";

}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}