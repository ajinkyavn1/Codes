#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int axisx,axisy;
    cin>>axisx>>axisy;
    vector<int> v(axisx);
    for(int i=0;i<axisx;i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    if((v[0]+v[axisx-1])>axisy&&axisx>1){
        cout<<"NO\n";
    }else{
        cout << "axisyES\n";
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