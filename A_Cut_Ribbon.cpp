#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<min({a,b,c});
}

int main(){
    do_it_fast;
    
        solve();     
    
    return 0;
}