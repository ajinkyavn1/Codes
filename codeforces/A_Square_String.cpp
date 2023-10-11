#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string s;
    cin>>s;
    bool x=true;
    if(s.size()%2!=0){
        x=false;
    }else{
        for(int i=0;i<(s.size()/2);i++){
            if(s[i]!=s[i+(s.size()/2)]){
                x=false;
            }
        }
       
    }
    cout << ((x)?"YES":"NO")<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}