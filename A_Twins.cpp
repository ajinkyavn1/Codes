#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int n;
    cin>>n;
   vector<int> v(n);
    int sum=0;
    int totalsum=0;
    for(int i=0;i<n;i++){
       cin>>v[i];
       totalsum+=v[i];
    }
    int half=totalsum/2;
    int count=0;
    sort(v.begin(),v.end());

    for(int i=n-1;i>=0;i--){
        sum+=v[i];
        count++;
        if(sum>half)
            break;
    }
    cout<<count;
    return 0;
}