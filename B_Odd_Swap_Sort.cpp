#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    vll a,b;

    for(auto i:v){
        if(i & 1){
            a.push_back(i);
        }
        else b.push_back(i);
    }

    if(is_sorted(a.begin(), a.end()) && is_sorted(b.begin(), b.end())){
        cout << "Yes\n";
    }else{
        cout << "No\n";
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