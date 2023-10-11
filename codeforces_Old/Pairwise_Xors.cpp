#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll num;
    cin>>num;
    ll numaxisxor=num&~(num-1);
    if (num & 1 || num == numaxisxor)
        cout<<-1<<"\n";
    else
        cout << numaxisxor / 2 << " " << num / 2 << " " << (num - numaxisxor) / 2 << "\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}