#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
    int  n;
    cin>>n;
    vector<int> ans(n, 0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if ((i + 1) != x)
        {
            ans[x - 1] = (i + 1);
        }
        else
        {
            ans[x - 1] = x;
        }
    }
    for (auto a : ans)
    {
        cout << a << " ";
    }
    return 0;
}