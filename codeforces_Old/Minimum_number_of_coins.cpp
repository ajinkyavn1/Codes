#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    int s1=n%5;
    int s2=((n%10)%5);
    if(s1==0&&s2==0){
       
        cout<<min(round(n/5),round((n/10.0)))<<"\n";
    }else{
        cout<<"-1\n";
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