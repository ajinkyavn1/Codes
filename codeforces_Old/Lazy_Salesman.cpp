#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n,h;
    cin>>n>>h;
    int count=0;
    int i,sum=0;
    vector<int> v;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
       v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(auto a:v){
        sum+=a;
        n--;
        if(sum>=h){
            break;
        }
    }
    cout<<n<<"\n";
    return;
}

int main(){
    do_it_fast;
    ll t=1; 
    cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}
