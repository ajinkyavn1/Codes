#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>c
using namespace std;

void solve(){
    ll  s;
    cin>>s;
    if( s <9){
        cout<<1<<"\n"<<s<<"\n";
    }else{
        vector<string> v;
        string st=to_string(s);
        int i=0;
        while (!st.empty()){
            string x="";
            if(st.back()=='0'){
                st.pop_back();
                i++;
                continue;
            }
            x+=st.back();
            ll k=i;
            while(k>0){
                x+='0';
                k--;
            }
            i++;
            v.push_back(x);
            st.pop_back();
        }
     cout<<v.size()<<"\n";
     for(auto a:v)cout<<a<<" ";
     cout<<"\n";   
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