#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
signed main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(str.size()>10){
            string s=str.substr(1,str.size()-2);
            char c1=str[0];
            char c2=str[str.size()-1];
            cout<<c1<<s.size()<<c2<<"\n";
        }else{
            cout<<str<<"\n";
        }
    }
    return 0;
}