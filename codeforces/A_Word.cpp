#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string st;
    cin>>st;
    ll g=0,l=0;
    for(auto a:st)
        if(a>='A'&&a<='Z')
            g++;
        else
            l++;
    if (l > g || l == g)
    {
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        cout << st << "\n";
    }else{
        transform(st.begin(), st.end(), st.begin(), ::toupper);
        cout<<st<<"\n";
    } 
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