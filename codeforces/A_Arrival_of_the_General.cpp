#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int n;
    cin>>n;
    int ma=-1,mi,l=0,r=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mi=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>ma){
            ma=a[i];
            l=i;
        }
        if(a[i]<=mi){
            mi=a[i];
            r=i;
        }
    }
    if(r>l)
        cout<<l+(n-r-1);
    else
        cout << l + (n - r - 2);
    return 0;
}