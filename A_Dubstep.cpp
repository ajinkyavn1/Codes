#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    string str;
    cin>>str;
    int curr=0;
    for(int i=0;i<str.size();i++){
        char c=str[i];
        if((c=='W'&&str[i+1]=='U'&&str[i+2]=='B')){
           i=i+2;
           if(!curr){
               curr=1;
               cout<<" ";
           }
        }else{
            curr=0;
            cout<<c;
            
        }
    }
    return 0;
}