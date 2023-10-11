#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int arr[26] = {0};
    for (int i = 0; i < 26; i++)
        cin >> arr[i];
    string s;
    cin >> s;
    int Result = 0;
    int fre[26] = {0};
    for (int i = 0; i < s.size(); i++)
        fre[s[i] - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] == 0)
        {
            Result += arr[i];
        }
    }
    cout << Result << "\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}