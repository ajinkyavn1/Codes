#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vll vect(n);
    ll Result=0;
    for(int i=0;i<n;i++){
        cin>>vect[i];
        Result+=vect[i];
    }
    sort(vect.begin(),vect.end());
    if(Result<=vect[vect.size()-1]){
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