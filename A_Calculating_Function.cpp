#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll n,x=0;
    cin>>n;
    if(n%2==0)
        x=n/2;
    else    
        x=((n+1)/2)*(-1);
    cout<<x;
}

int main(){
    do_it_fast;
   solve();
    return 0;
}