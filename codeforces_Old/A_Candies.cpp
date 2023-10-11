// #include<bits/stdc++.h>
// typedef long long int ll;
// #define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
// using namespace std;

// signed main(){
//     fastio;
//     int n,k;
//     cin>>n>>k;
//     int div=n/k;
//     int mo=n%k;
//     if(mo==0){
//         for(int i=0;i<k;i++)
//             cout<<n/k<<" ";
//     }else{
//         for(int i=0;i<k-n%k;i++)
//             cout<<n/k<<" ";
//         for(int i=0;i<n%k;i++)
//             cout << n / k+1<<" ";
//     }
//     return 0;
// }

//1343A 

#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    int x=1;
    for(int i=2;i<=35;i++){
       ll di=pow(2,i)-1;
       if(n%di)continue;

       x=n/di;
       break;
    }
    cout<<x<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}