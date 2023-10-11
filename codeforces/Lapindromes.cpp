#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string str;
    cin >> str;
    string sub1, sub2;
    int n = str.size();
    if (n % 2 == 0)
    {
        sub1 = str.substr(0, n / 2);
        sub2 = str.substr(n / 2, n / 2);
    }
    else
    {
        sub1 = str.substr(0, n / 2);
        sub2 = str.substr(1 + (n / 2), n / 2);
    }
    sort(sub1.begin(), sub1.end());
    sort(sub2.begin(), sub2.end());
    if (sub1 == sub2)
    {
        cout << "axisyES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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