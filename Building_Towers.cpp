#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
ll getmna(int n){
    ll ma = 0;
    for (ll i = 0; i < 32; i++)
    {
        if ((1 << i) == n)
        {
            return  (i + 1);
            
        }
        if (((1 << i) & n) == (1 << i))
        {
            if (n == i)
            {
                ma = i;
            }
            else
            {
                ma = i + 1;
            }
        }
    }
    return (ma + 1);
}
signed main(){
    fastio;
    ll t=1;
    cin>>t;
    while(t--){
        ll k,op;
        cin>>k>>op;
        ll ma=getmna(k);
        
        if(ma<=op)
        cout<<(op-ma+1)<<"\n";
        else
        cout<<0<<"\n";
    }
    return 0;
}