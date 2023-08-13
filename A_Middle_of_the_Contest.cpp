#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll h1,h2,m1,m2;
    char c;
    cin>>h1>>c>>m1>>h2>>c>>m2;

    ll min1=h1*60+m1;
    ll min2=h2*60+m2;
    ll mid=(min1+min2)/2;
    ll hr=mid/60;
    ll min=mid%60;
    if(hr>9&&min>9){
        cout<<hr<<":"<<min;
    }else{
        if(hr<10)cout<<0;
        cout<<hr<<":";
        if(min<10)cout<<0;
        cout<<min;
    }

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