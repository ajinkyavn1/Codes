#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

bool isvowel(char c){
    if(c=='a'||c=='i'||c=='o'||c=='u'||c=='e')
        return true;
    return false;
}
void solve(){
    string str;
    cin>>str;
    if(!isvowel(str.back()) and str.back()!='n'){
        cout<<"NO";
        return ;
    }
    bool flag=true;

    for(ll i=0;flag&&i<str.size()-1;i++){
        if(str[i]!='n' && (!(isvowel(str[i])) )&&( !( isvowel(str[i+1]))))
        {
            flag=false;
            break;
        }
    }
    if(!flag)
    cout << "NO";
    else 
    cout<<"YES";

}

int main(){
    do_it_fast;
    ll t=1; //cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}