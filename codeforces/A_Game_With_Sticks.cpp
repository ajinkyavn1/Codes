#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int n,m;
    cin>>n>>m;
    int k=min(n,m);
    if(k%2==0){
        cout << "Malvika";
    }else{
        cout<<"Akshat";
    }
    return 0;
}