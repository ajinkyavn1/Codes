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
        int sum1=0,mx=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            sum1+=num;
            mx=max(mx,num);
        }
        cout<<fixed<<setprecision(10)<<(double)(((sum1-mx)/(n-1))+mx)<<"\n";
    }
    return 0;
}