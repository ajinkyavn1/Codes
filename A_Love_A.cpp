#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string st;
    cin>>st;
    ll ac=0;
    for(auto a:st)a=='a'?ac++:ac;
   // if(st.size()-1>ac)
    cout<<min(ll(st.size()),(2*ac-1))<<"\n";
    
}

int main(){
    do_it_fast;
    ll t=1; 
    // cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}