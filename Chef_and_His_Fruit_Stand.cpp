#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        int banana,apple;
        cin>>banana>>apple;
        int x=((banana/2)<apple)?(banana/2):apple;
        cout<<x<<"\n";
    }
    return 0;
}