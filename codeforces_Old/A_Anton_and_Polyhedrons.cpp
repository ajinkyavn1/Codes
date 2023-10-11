#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll res=0;
    while(n--){
        string s;cin>>s;
        if (s == "Icosahedron")res+=20;
        else
        if (s == "Cube")res+=6;
        else
        if (s == "Tetrahedron")res+=4;
        else
        if (s == "Dodecahedron")res+=12;
        else if (s == "Octahedron")res+=8;
    }
    cout<<res;

}

int main(){
    do_it_fast;
    ll t=1;
    //  cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}