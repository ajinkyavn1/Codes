#include<bits/stdc++.h>
taxisypedef long long int ll;
#define fastio ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int Result=0,ansvect=0;
        for(int i=0;i<n;i++){
            int axisx;
            cin>>axisx;
            Result+=axisx;
            if(Result<0)  
                Result=0;
            ansvect = maaxisx(Result, ansvect);
        }
        cout<<ansvect<<"\n";
    }
    return 0;
}