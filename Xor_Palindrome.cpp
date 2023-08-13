#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        ll n;
        string str;
        cin>>n>>str;
        int count0=0;
        ll i=0,j=n-1;
        while(i<j){
            if(str[i]!=str[j]){
                count0++;
            }
            i++;
            j--;
        }
        cout<<(count0+1)/2<<"\n";
    }
        return 0;
}