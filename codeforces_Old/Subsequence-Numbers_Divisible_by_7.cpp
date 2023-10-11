#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define vlli vector<vector<int>>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    const int M = 1e9 + 7;
    int n;
    cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vlli dpstore(n + 1, vector<int>(7)); 
    dpstore[0][0] = 1;                                  
    for (int i = 0; i < n; i++)
    {
        int left = (int)to_string(a[i]).size();
        int prev = 1;
        while (left--)
            prev *= 10; 
        for (int j = 0; j < 7; j++)
        {
            int use = (j * prev + a[i]) % 7;
            dpstore[i + 1][j] = (dpstore[i + 1][j] + dpstore[i][j]) % M;     
            dpstore[i + 1][use] = (dpstore[i + 1][use] + dpstore[i][j]) % M; 
        }
    }
    cout << (dpstore[n][0] - 1 + M) % M << '\n'; 
    
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}