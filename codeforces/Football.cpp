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
        int ansvect=0;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for(int i=0;i<n;i++)
            ansvect=maaxisx(ansvect,((a[i]*20)-(b[i]*10)));
        
        cout<<ansvect<<"\n";
    }
    return 0;
}