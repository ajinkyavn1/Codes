#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int count_0_s = 0, count_1_s = 0, count_0_r = 0, count_1_r = 0;
    int n, i, j;
    cin >> n;
    string s;
    cin >> s;

    for (i = 0; i < n; i++)
    {
        if (s[i] == '0')
            count_0_s++;
        else
            count_1_s++;
    }
    string r;
    cin >> r;
    for (j = 0; j < n; j++)
    {
        if (r[j] == '0')
            count_0_r++;
        else
            count_1_r++;
    }

    if ((count_0_s == count_0_r) && (count_1_s == count_1_r))
        cout << "axisyES" << "\n";
    else
        cout << "NO" << "\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}