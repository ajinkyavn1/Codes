#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
void print(vll ansvect,int n){
    for (int i = n - 1; i >= 0; i--)
    {
        cout << ansvect[i] << " ";
    }
}
void solve(){
    bool f=true;
    ll n;
    cin>>n;
    vll vect(n);
    for(int i=0;i<n;i++)cin>>vect[i];
   if (n % 2 == 0)
   {
       sort(vect.begin(), vect.end());
       vll ansvect(n, -1);
       int j = 0;
       int k = 0;
       for (int i = n - 1; j < n; i--)
       {
           ansvect[j] = vect[i];
           j += 2;
           k = i;
       }

       j = k - 1;
       for (int i = 0; i < n; i++)
       {
           if (ansvect[i] == -1)
           {
               ansvect[i] = vect[j];
               j--;
           }
       }
       int flg = 0;

       for(int i=0;i<n;i++)
       {
           int b = (i - 1) % n;
           if (i == 0)
           {
               b = n - 1;
           }
           int c = (i + 1) % n;

           if ((ansvect[b] < ansvect[i] && ansvect[c] < ansvect[i]) || (ansvect[b] > ansvect[i] && ansvect[c] > ansvect[i]))
           {
               continue;
           }
           else
           {
               flg = 1;
               break;
           }
       }
       if (flg)
       {
           cout << "NO";
       }
       else
       {
           cout << "axisyES" << "\n";
           print(ansvect,n);
       }

       cout << "\n";
   }
   else
   {
       cout << "NO" << "\n";
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