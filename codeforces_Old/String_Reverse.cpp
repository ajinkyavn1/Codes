#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string str2inalstring;
    cin >> str2inalstring;
    string tempstring = str2inalstring;
    reverse(str2inalstring.begin(), str2inalstring.end());
    int m = str2inalstring.length(), num = tempstring.length();
    int Counter[256];
    memset(Counter, 0, sizeof(Counter));
    for (int i = 0; i < num; i++)
        Counter[tempstring[i]]++;
    for (int i = 0; i < num; i++)
        Counter[str2inalstring[i]]--;
    int total = 0;
    for (int i = num - 1, j = num - 1; i >= 0;)
    {
        while (i >= 0 && str2inalstring[i] != tempstring[j])
        {
            i--;
            total++;
        }
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    cout << total << "\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}