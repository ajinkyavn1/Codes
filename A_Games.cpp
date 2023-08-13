#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> home;
    vector<int> gust;
    for(int i=0;i<n;i++){
        int h,g;
        cin>>h>>g;
        home.push_back(h);
        gust.push_back(g);
    }
    int count=0;
    for(int i=0;i<home.size();i++){
        for(int j=0;j<gust.size();j++){
            if(home[i]==gust[j]){
                count++;
            }
        }
    }
    cout<<count;
}
int main(){
    do_it_fast;
    ll t=1;;
    while(t--){
        solve();     
    }
    return 0;
}