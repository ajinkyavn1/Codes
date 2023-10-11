#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    string ip1,ip2;
    cin>>ip1>>ip2;
    
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        
        if(ip1[i]!=ip2[i]){
            // t1+=ip1[i];
            st.insert(ip2[i]);
        }
    }
    cout<<st.size()<<"\n";
    
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}