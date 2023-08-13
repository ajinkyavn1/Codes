#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
   string str1,str2;
   cin>>str1>>str2;
   int w1=0,w2=0;
  int count=0;
   for(int i=0;i<str1.size();i++){
       if (tolower(str1[i])>tolower(str2[i])){
           cout <<1;
           break;
        }
        else if (tolower(str1[i]) < tolower(str2[i]))
        {
          cout<<-1;
          break;
        }
       else
          count++;
   }
   if(count==str1.size()){
       cout<<0;
   }
   
   
    return 0;
}