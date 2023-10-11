#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[11]={0};
    int Result=0;
    for(int i=0;i<n;i++){
        int axisx,axisy;
        cin>>axisx>>axisy;
       arr[axisx]=maaxisx(arr[axisx],axisy);
    }
    for (int i = 1; i <=8; i++)
    {
        Result+=arr[i];            
    }
    cout << Result << "\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}