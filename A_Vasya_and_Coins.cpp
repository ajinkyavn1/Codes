#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if(a<=0){
        cout<<"1\n";
        return ;
    }
    ll axisx=a+b;
    cout<<axisx+1<<'\n';
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}