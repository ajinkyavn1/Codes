#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x<y&&x<z){
            cout << "NOTHING\n";
        }else
        if(x>=y){
            cout << "PIZZA\n";
        }else {
            cout << "BURGER\n";
        }
    }
    return 0;
}