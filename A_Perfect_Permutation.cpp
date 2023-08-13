#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n<=1||n%2==1){
        cout<<"-1";
        return;
    }
    vector<ll> v(n);

    for(int i=1;i<=n;i++){
        v[i-1]=i;
    }
    for(int i=1;i<n;i+=2){
        swap(v[i-1], v[i]);
    }
    
    for(auto a:v) cout<<a<<" ";
}

int main(){
    do_it_fast;
    solve();
    return 0;
}