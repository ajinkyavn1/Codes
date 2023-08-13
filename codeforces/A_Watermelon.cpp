#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    
        int n;
        cin>>n;
        if(n>2)
           cout<<((n%2==0)?"YES":"NO");
        else
            cout<<"NO";
    return 0;
}