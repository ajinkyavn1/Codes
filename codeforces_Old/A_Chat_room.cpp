#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

signed main(){
    fastio;
   string str;
   cin>>str;
   
   int count=0;
   string s="hello";
   int curr=0;
 for(int i=0;i<str.length();i++){
    if(str[i]==s[curr]){
        curr++;
        count++;
        if(count==5){
            break;
        }
    }
 }
 if(count==5){
     cout<<"YES";
 }else{
     cout<<"NO";
 }
   return 0;
}