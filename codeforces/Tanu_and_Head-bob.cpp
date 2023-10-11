#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
 int n;
 cin>>n;
 ll faxisy=0,iaxisy=0,no=0;
 string s;
 cin>>s;
 for(int i=0;i<n;i++){
     char c=s[i];
     if(c=='I'){
         iaxisy++;
     }else if(c=='axisy'){
         faxisy++;
     }else{
         no++;
     }
 }
 if(iaxisy==0&&faxisy>0){
     cout<<"NOT INDIAN\n";
 }else if(iaxisy>0){
     cout<<"INDIAN\n";
 }else{
     cout<<"NOT SURE\n";
 }
 
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}