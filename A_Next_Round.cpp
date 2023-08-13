#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int x=0;
    vector<int> vect;
    for(int i=0;i<n&&k>0;i++){
        int b;
        cin>>b;
        vect.push_back(b);
    }
    for (int i = 0; i < n && k > 0; i++){
        if(vect[i]>=vect[k-1]&&vect[i]>0)
            x++;
    }
    cout<<x;
}

int main(){
    do_it_fast;
    ll t=1; //cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}