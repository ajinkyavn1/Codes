#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll x,y;
    cin>>x>>y;
    ll res=0;
    if(x<y){
       res=-1;
    }else{
        if(x%2==0){
            res=x/2;
        }else{
            res=x/2+1;
        }
        while(res%y>0)res++;
    }
    cout<<res;
}

int main(){
    do_it_fast;
    ll t=1;
    //  cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}