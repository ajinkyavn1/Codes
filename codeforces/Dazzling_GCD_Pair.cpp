#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int A,B;
    cin>>A>>B;
   if(A%2==0){
       if(A+2<=B)
        cout<<A<<" "<<A+2<<"\n";
        else
            cout<<"-1\n";
   }else{
       if(A+3<=B){
           if(A%3==0){
               cout << A << " " << A + 3 << "\n";
           }else 
           cout<<A+1<<" "<<A+3<<"\n";
       }else{
           cout<<"-1\n";
       }
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