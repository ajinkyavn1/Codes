#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
void con(ll &ans,string str){
    if (str[0] == '1')
        ans++;
    if (str[str.size() - 1] == '0')
        ans++;
}
void solve(){
    ll n ;
    string str;
    cin>>n>>str;
    ll ans=0;
    if(str.size()==1){
        cout<<1<<"\n";return;
    }
    for(int i=1;i<str.size();i++){
        if(str[i]=='1'&&str[i-1]=='0'){
            ans++;
        }
    }
    con(ans,str);
    cout<<ans<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}