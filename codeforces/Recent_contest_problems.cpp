#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<string> s(n);
    for(auto &i:s)
            cin>>i;
    int count1=0,count2=0;
    for(auto a:s){
        if (a == "START38")
            count1++;
        else
            count2++;
    }
    cout<<count1<<" "<<count2<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}