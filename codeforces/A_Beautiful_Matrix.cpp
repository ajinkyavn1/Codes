#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int arr[6][6],i,j,r,c;
    for( i=1;i<6;i++){
        for(j=1;j<6;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                 r=abs(3-i);
                 c=abs(3-j);
                cout<<(r+c);
    
            }
        }
    }  
    return 0;
}