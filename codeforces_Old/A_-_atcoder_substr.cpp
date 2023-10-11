#include<string>
#include <iostream>
using namespace std;

void solve(){
    string s="atcoder";
    int x,y;
    cin>>x>>y;
    for(int i=x-1;i<y;i++){
        cout<<s[i];
    }
}
 
int main(){
  
    int  t=1;
    while(t--){
        solve();     
    }
    return 0;
}
