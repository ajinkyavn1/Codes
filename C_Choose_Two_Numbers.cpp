#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
 
void solve(){
    ll len1,len2;
    cin>>len1;
    vll v1(len1);
    for(auto &i:v1)cin>>i;
    cin>>len2;
    vll v2(len2);
    for(auto &i:v2)cin>>i;
    map<int,int> mp;
    for(auto a:v1)mp[a]++;
    for(auto a:v2)mp[a]++;
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(mp.find(v1[i]+v2[j])==mp.end()){
                cout<<v1[i]<<" "<<v2[j];
                return;

                
            }
        }
    }
}
 
int main(){
    do_it_fast;
    ll t=1;
    while(t--){
        solve();     
    }
    return 0;
}
