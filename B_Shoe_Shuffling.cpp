#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
void print(vll ans){
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
void solve(){
    ll len;
    cin >> len;
    vll ip(len);
    unordered_map<int, int> mp;
    for (int i = 0; i < len; i++)
    {
        cin >> ip[i];
        mp[ip[i]]++;
    }
    vll ans(len, 0);
    for (int i = 0; i < ip.size(); ++i)
    {
        ans[i] = i + 1;
   }
   bool isable = true;
   for (auto a : mp)
   {
       if (a.second == 1)
       {
           isable = false;
           break;
       }
   }
   if (isable)
   {
       for (int i = 0; i < ip.size() - 1; ++i)
       {
           if (ip[i] == ip[i + 1])
           {
               ++ans[i];
               ll temp=ans[i];
                ans[i]=ans[i+1];
               ans[i + 1]=temp;
               --ans[i + 1];
           }
       }
       print(ans);
   }else{
       cout<<"-1\n";
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