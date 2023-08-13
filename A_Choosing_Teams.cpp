#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]<5){
            if(5-v[i]>=k){
                count++;
            }
        }
    }
    if(count>=3){
        cout<<count/3;
    }else{
        cout<<0;
    }
}

int main(){
    do_it_fast;
    ll t=1; 
    while(t--){
        solve();     
    }
    return 0;
}