#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        int A,B,X,Y;
        cin>>A>>B>>X>>Y;
        int fund=A*B;
        int fu=X*Y;
        if(fu>=fund){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}