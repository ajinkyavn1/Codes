#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

signed main(){
    fastio;
    ll t=1;
    cin>>t;
    while(t--){
        ll X;
        string s;
        cin>>X>>s;
        ll Carlsen = 0;
        ll chef=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='C'){
                Carlsen+=2;
            }else if(s[i]=='N'){
                chef+=2;
            }else{
                chef++;
                Carlsen++;
            }
        }
        if(Carlsen==chef){
            cout<<55*X<<"\n";
        }else
            if(Carlsen>chef){
                cout<<(X*60)<<"\n";
        }else{
            cout<<40*X<<"\n";
        }
    }
    return 0;
}