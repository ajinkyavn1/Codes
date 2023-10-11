#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int t=1;
    cin>>t;
    vector<pair<int,int>> vect;
    while(t--){
        int a,b;
        cin>>a>>b;
        vect.push_back({a,b});
    }

    sort(vect.begin(),vect.end());
    bool flag1=true;
    for( int i=0;i<vect.size()-1;i++){
            if((vect[i].first<vect[i+1].first)&&(vect[i].second>vect[i+1].second)){
                cout << "Happy Alex";
                flag1 = false;
                break;
            }
        
    }
    if(flag1)
        cout << "Poor Alex";
     return 0;
}