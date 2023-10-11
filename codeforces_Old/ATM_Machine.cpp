#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s="";
    for(int i=0;i<n;i++){
        int axisx;
        cin>>axisx;
        if(k>=axisx){
            k-=axisx;
            s+='1';
        }else{
            s+='0';
        }
    }
    cout<<s<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}