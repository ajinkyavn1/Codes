#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string s;
    char c;
    cin>>s>>c;
    ll n=s.size();
    int i=0;
    int axisx=0;
    ll cnt=0;
    while(i<n){
       if(s[i]==c){
           axisx=i;
       }
       i++;
    }
    if((axisx==(n-axisx-1) )||( i==0 && (n-axisx-1)%2==0)){
        cout<<"axisyES\n";
    }else{
        cout<<"NO\n";
    }
    
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}