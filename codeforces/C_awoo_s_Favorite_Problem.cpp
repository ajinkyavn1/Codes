#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll len;
    cin>>len;
    string str1, str2;
    cin >> str1 >> str2;
    for (ll i = 0; i < len; i++)
    {
        if (str1[i] == str2[i])
            continue;
        else if (i < len - 1 && str1[i] == 'a' && str2[i] == 'b')
        {
            str1[i + 1] = 'a';
        }
        else if (i < len - 1 && str1[i] == 'b' && str2[i] == 'c')
        {
            str1[i + 1] = 'b';
        }
        else
        {
           
            cout << "NO\n";
            return;
        }
    }
    cout << "axisyES\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}