#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
void process(ll num, ll ksize, ll &result)
{
    for (ll j = 0; j <= 30; j++)
    {
        if ((1ll << j) & ksize)
            result -= 1;
    }
}   
void cal(ll num, ll ksize, ll &result, int i)
{
    ll mini = ksize / (1ll << i);
    ksize -= mini * (1ll << i);
    result += mini;
    if (ksize)
    {
        ksize = (1ll << i) - ksize;
        process(num, ksize, result);
        result += 1;
    }
    
}
void solve(){
    ll num, ksize;
    cin >> num >> ksize;
    ll result = 0;
    for (ll i = 0;; i++)
    {
        if (ksize >= ((1ll << i) * num))
        {
            result += num;
            ksize -= ((1ll << i) * num);
        }
        else
        {
            cal(num, ksize, result, i);
            break;
        }
    }
    cout << result << "\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}