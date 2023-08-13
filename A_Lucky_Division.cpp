#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int n;
    cin>>n;
    int f=0,x;
    int tmp=n;
    while(tmp){
         x=tmp%10;
        if(x==4||x==7)
        f=1;
        else{
            f=0;
            break;
        }
        tmp/=10;
    }
    if(f==1){
        cout<<"YES";
    }else{
        if(n%4==0||n%7==0||n%44==0||n%47==0||n%74==0||n%77==0||n%444==0||n%447==0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    return 0;
}