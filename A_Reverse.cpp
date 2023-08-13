#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);//1 4 2 3
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i;
    for(i=0;i<n;i++){
        if((i+1)!=v[i]){
            int m;
            for(int j=i+1;j<n;j++){
                if(v[j]==i+1){
                    m=j;
                    break;
                }
            }
            swap(v[i],v[m]);
            break;
        }
    }

    // for(int i=0; i<n; i++){
    //     if(v[i] == i+1)continue;
    //     for(int j=i; j<n; j++){
    //         if(v[j] == i+1){
    //             reverse(v.begin() + i, v.begin() + j + 1);
    //             break;
    //         }
    //     }
    //     break;
    // }
    for(auto a:v)
         cout<<a<<" ";
    cout<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}