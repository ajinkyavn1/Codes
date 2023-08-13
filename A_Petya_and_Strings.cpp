#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    bool flag=true;
    for(int i=0;i<s1.size();i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        if(s1[i]!=s2[i]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"0";
    }else if(s1<s2){
        cout<<"-1";
    }else{
        cout<<"1";
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