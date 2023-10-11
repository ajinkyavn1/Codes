#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll len;
    cin >> len;
    ll dpdp[len + 1];
    memset(dpdp, 0LL, sizeof(dpdp));
    vll ip1(len), ip2(len);
    for (int i = 0; i < len; i++)
        cin >> ip1[i];
    for (int i = 0; i < len; i++)
        cin >> ip2[i];
   

    for (int i = 0; i < len; i++)
    {
        if (i == 0 || ip1[i] >= ip2[i - 1])
        {
            dpdp[i] = ip2[i] - ip1[i];
            continue;
        }
        dpdp[i] = ip2[i] - ip2[i - 1];
    }

    for (ll i = 0; i < len; i++)
    {
        cout << dpdp[i] << " ";
    }
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();   
        cout<<"\n";  
    }
    return 0;
}