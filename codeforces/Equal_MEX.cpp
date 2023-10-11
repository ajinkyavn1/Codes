#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        int n;
        bool flag = true;
        map<int, int> mp;
        cin>>n;
        for(int i=0;i<(2*n);i++){
           int k;
           cin>>k;
           mp[k]=(mp[k]+1);
        }
        
        
        for(int i=0;i<mp.size();i++){
            if(mp.find(i)==mp.end())
                break;
            if(mp[i]==1){
                flag=false;
                break;
            }
        }
        cout<<((flag)?"YES\n":"NO\n");
    }
    return 0;
}