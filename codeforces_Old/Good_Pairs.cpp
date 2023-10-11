#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
bool isgood(int i,int j,vll &a,vll &b){
    if( i<j){
        if((a[i]==b[j])&&(b[i]==a[j]))
            return true;
        else    
            return false;
    }
    return false;
}
void solve(){
    int n;
    cin>>n;
    vll a(n);
    vll b(n);
    for(auto &i:a)cin>>i;
    for(auto &i:b) cin>>i;
    int count=0;
    int i=0,j=n-1;
    while(i<n && j>=0){
        if(isgood(i,j,a,b))
            count++;
        i++;j--;
    }
    cout<<count<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}