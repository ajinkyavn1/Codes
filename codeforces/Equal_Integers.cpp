#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll A,B;
    cin>>A>>B;
    if(A > B)
    {
        ll twodiff = A - B;
        twodiff = twodiff / 2 + twodiff % 2;
        B += twodiff * 2;

        if (B > A)
        {
            cout << twodiff + 1;
        }
        else
            cout << twodiff;
    }
    // cout<<(A==0?0:B-A);
    else {
        cout << (A == 0 ? 0 : B - A);
    }
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