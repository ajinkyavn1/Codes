#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int count=0;
    int hire=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1){
            if(hire==0){
                count++;
            }else{
                hire+=x;
            }
        }else{
            hire+=x;
        }
    }
    cout<<count<<"\n";
}

int main(){
    do_it_fast;
    // ll t=1; cin>>t;
    // while(t--){
        solve();     
    // }
    return 0;
}