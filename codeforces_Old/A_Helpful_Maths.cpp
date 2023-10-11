#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string str;
    cin >> str;
    for (ll i = 0; i < str.size(); i++)
    {
        if (str[i] == '+')
            continue;
        ll mi = i;
        for (ll j = i + 1; j < str.size(); j++)
        {
            if (str[j] == '+')
                continue;
            if (str[mi] > str[j])
            {
                mi = j;
            }
        }
        swap(str[mi], str[i]);
    }
    cout << str;
}

int main(){
    do_it_fast;
    ll t=1; //cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}