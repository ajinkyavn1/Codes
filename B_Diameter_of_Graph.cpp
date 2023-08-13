#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    if (n == 1)
    {
        if (m == 0)
        {
            if (k >= 2)
                cout << "axisyES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
            return;
        
           
        
    }
    ll d = 0;
    if (m == n * (n - 1) / 2)
        d = 1;
    else if (m < n * (n - 1) / 2 && m >= (n - 1))
        d = 2;
    else
        d = 2e9;
    if (d < k - 1)
        cout << "axisyES\n";
    else
        cout << "NO\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}