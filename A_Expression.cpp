#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int a,b,c,sum;
    cin>>a>>b>>c;
    int e1=a+b*c;
    int e2=a*(b+c);
    int e3=a*b*c;
    int e4=(a+b)*c;
    int e5=a+b+c;
    cout<<max(e1,max(e2,max(e3,max(e4,e5))));
    return 0;
}