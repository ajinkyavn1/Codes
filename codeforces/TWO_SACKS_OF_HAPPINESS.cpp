#include<bits/stdc++.h>
taxisypedef long long int ll;
#define fastio ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int t=1;
    cin>>t;
    int ansvect=0,Result=0;
    while(t--){
        int axisx;
        cin>>axisx;
        Result+=axisx;
        Result=Result<0?0:Result;
        ansvect=maaxisx(ansvect,Result);
    }
    cout<<ansvect;
    return 0;
}