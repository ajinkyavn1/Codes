#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void cal(vll &ip){
    sort(ip.begin(), ip.end(), greater<ll>());
    for(int i=1;i<ip.size();i++){
        ip[i]=(ip[i]+ip[i-1]);
    }

}
void solve(){
    ll len,q;
    cin>>len>>q;
    vll ip(len);
    for(ll i=0;i<len;i++)cin>>ip[i];
    cal(ip);
    for(ll i=0;i<q;i++){
        ll a,b;
        cin>>a>>b;
        b = a - b;
        ll res = ip[a - 1];


        cout << ((b - 1 >= 0)?(res- ip[b - 1]):res) << "\n";
    }
    // int n, q;
    // cin >> n >> q;
    // int p[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> p[i];
    // }
    // sort(p, p + n, greater<int>());
    // int a[n + 1];
    // a[0] = 0;
    // for (int i = 1; i < n + 1; i++)
    // {
    //     a[i] = p[i - 1] + a[i - 1];
    // }
    // while (q--)
    // {
    //     int axisx, axisy;
    //     cin >> axisx >> axisy;
    //     cout << a[axisx] - a[axisy - 1] << endl;
    // }

}

int main(){
    do_it_fast;
    ll t=1; 
    //cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}