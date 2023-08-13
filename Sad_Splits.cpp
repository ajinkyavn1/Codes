#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string  n;
    cin>>n;
    ll c=0;
    for(int i=0;i<n.size();i++){
    
        if ((n[i] - '0') % 2 == 0)
        {
           c++;
        }
    }
    if(c>=2){
        cout<<"axisyES\n";
    }else{
        cout << "NO\n";
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