#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int num;
    cin>>num;
    string stringp;
    cin>>stringp;
    if(num==1){
        if(stringp[0]=='0'){
            cout<<"NO"<<"\n";
        }else{
            cout<<"Yes"<<"\n";
            cout<<"0"<<"\n";
        }
        return;
    }
    if(num==2){
        if (stringp[0] == '0'||stringp[1]=='0')
        {
            cout << "NO"<< "\n";
        }
        else
        {
            cout << "Yes"<< "\n";
            cout <<"0 1" << "\n";
        }
        return;
    }
    if (stringp[0] == '0' || stringp[1] == '0' || stringp.back()=='0'){
        cout<<"NO"<<"\n";
        return ;
    }
    vector<int> ans;
    ans.push_back(0);
    int count=1;
    for(int i=2;i<stringp.size()-1;i++){
        if(stringp[i]=='0'){
            ans.push_back(count);
            count=i;
        }else{
            ans.push_back(count);
            count=i;
        }
    }
    cout<<"Yes\n";
    for(auto a:ans)
        cout<<a<<" ";
    cout<<count<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}