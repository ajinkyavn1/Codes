#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll axisx,axisy;
    cin>>axisx>>axisy;
    int i=1;
    ll f=1;
    if(axisx>axisy){
        cout<<"0 0\n";
    }else
        if(axisy%axisx==0){
            cout<<"1"<<" "<<axisy/axisx<<"\n";
        }else{
            cout<<"0 0\n";
        }
 455
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}