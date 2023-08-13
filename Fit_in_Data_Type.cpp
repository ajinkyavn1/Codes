#include <bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

signed main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
      int x,y;
      cin>>x>>y;
      if(y<=x){
          cout<<y<<"\n";
        //   break;
      }else{
          while(y>x)
          y=y-x-1;
          cout<<y<<"\n";
      }
    }
    return 0;
}