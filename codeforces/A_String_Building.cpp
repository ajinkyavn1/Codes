#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string s;
    cin>>s;
    string a1[4]={"aa","aaa","bbb","bb"};
    int flag=true;
    for(int i=0;i<s.size();i++){
       ll cnt=1;
       while(s[i]==s[i+1] && i+1<s.size()){
           cnt++;
           i++;
       }
       if(cnt<2){
           flag = false;
           break;
       } 
    }
    if(flag){
        cout<<"axisyES\n";
    }else{
        cout<<"NO\n";
    }
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}