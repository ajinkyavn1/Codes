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
        cin>>n;
        string s="";
        char curr='a';
        for(int i=0;i<n;i++){
            s+=curr;
            curr++;
            if(curr=='d'){
                curr='a';
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}