#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    int jam=x,jay=x;
    for(int i=0;i<y;i++){
       jam+=1;
        jay+=1;
    }
    if(jam%2==0){
        cout << "Janmansh\n";
    }else{
        cout << "Jay\n";
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