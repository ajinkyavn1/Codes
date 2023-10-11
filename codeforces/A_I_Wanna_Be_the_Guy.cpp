#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> vect(n+1,0);
    int p,q;
    cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        vect[x]=1;
    }
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        vect[x] = 1;
    }
    bool flag=1;
    for (int i = 1; i <=n; i++)
    {
        if (vect[i] == 0)
            flag = 0;
    }
    if(flag){
        cout << "I become the guy.";
    }else{
        cout << "Oh, my keyboard!";
    }
}

int main(){
    do_it_fast;
    ll t=1; 
    //cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}