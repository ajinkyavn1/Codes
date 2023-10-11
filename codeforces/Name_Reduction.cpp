#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    string a,b;
    int n;
    cin>>a>>b>>n;
    a=a+b;
    int v[26] = {0};
    for(auto i:a){
        v[i-97]++;
    }
    bool found=true;
    string s;
    for(int i=1;i<=n;i++){
        string c;
        cin>>c;
        for(int i=0;i<c.size();i++){
            if(v[c[i]-97]>0){
                v[c[i]-97]--;
            }else{
               found=false;
                break;
            }
        }
    }
    if(found)
    cout<<"axisyES\n";
    else{
        cout<<"NO\n";
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