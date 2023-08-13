#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    string s;
    cin>>n>>s;
    vector<int> v(26,0);
    for(auto a:s)   
        v[a-'a']++;
    string res="";
    for(int i=0;i<26;i++){
        if(v[i]%n!=0){
            cout<<"-1";
            return;
        }else{
            ll t=v[i]/n;
            while (t--)
            {
               res.push_back('a'+i);
            }
            
        }

    }
    string st=res;
    while(--n){
        res+=st;
    }
    cout<<res;
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