#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string str;
    cin >> str;

    bool isall = true;
    for (auto i = 1; i < str.size(); i++)
    {
        if (str[i] >= 97)
        {
            isall = false;
            break;
        }
    }
    if (isall)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] >= 97)
            {
                str[i] = str[i] - 32;
            }
            else
            {
                str[i] = str[i] + 32;
            }
        }
        cout << str;
    }
    else
    {
        cout << str << "\n";
        return;
    }
    cout << "\n";
}

int main(){
    do_it_fast;
    ll t=1; 
    // cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}