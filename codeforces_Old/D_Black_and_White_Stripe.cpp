#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void p(ll kt,ll &res,string str,ll num,ll ans){
    ll left = 0, right = kt;
    while (right < num)
    {
        if (str[left] == 'W')
            ans--;
        if (str[right] == 'W')
            ans++;

        res = min(res, ans);
        left++, right++;
    }
}
void solve(){
    ll num,kt;
    string str;
    cin>>num>>kt>>str;
    ll res = kt;
    ll ans = 0;
    for (ll i = 0; i < kt; i++)
    {
        if (str[i] == 'W')
            ans++;
    }
    res = min(res, ans);
    p(kt,res,str,num,ans);
   
    cout << res;
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