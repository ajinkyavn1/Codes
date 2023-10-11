#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    ll i = 0;
    ll cnt1 = 0;
    while (i < str.size() && str[i] == '<')
        cnt1++, i++;
    i = str.size() - 1;
    ll cnt2 = 0;
    while (i >= 0 && str[i] == '>')
        cnt2++, i--;
    cout<<((cnt1 + cnt2));
}

int main(){
    do_it_fast;
    solve();
    return 0;
}