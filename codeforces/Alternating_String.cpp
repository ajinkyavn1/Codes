#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    string str;
    cin>>n>>str;
    int f1 = 0, f0 = 0, cnt1 = 0, cnt2 = 0;
    for (auto ch : str)
    {
       if(ch=='0')
            cnt1++;
        else
            cnt2++;
    }
    if(cnt1==cnt2){
        cout<<cnt2*2;
    }else if(cnt2<cnt1){
        cout << cnt2 * 2+1;
    }else{
        cout << cnt1 * 2 + 1;
    }
    cout<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}