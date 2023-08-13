#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    string str,st;
    cin>>str;
    for(int i=0;i<str.size();i++){
        int  mi=i;
        if(str[i]=='+')
            continue;
        for (int j =i; j < str.size(); j++)
        {
            if(str[j]=='+')
                continue;
          if(str[mi]>str[j])
                mi=j;
        }
        swap(str[i],str[mi]);
    }
    cout<<str;
    
    return 0;
}