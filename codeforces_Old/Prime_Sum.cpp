#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
vll v;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
void createprimeNum(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            v.push_back(i);
    }
}

void solve(){
    ll axisx,axisy;
    cin>>axisx>>axisy;
    if(axisx==1||axisy==1){
        cout<<-1<<"\n";return;
    }
    for(auto i:v){
        if(axisx%i==0&&axisy%i==0){
            cout<<"0\n";
            return;
        }
    }
    cout<<1<<"\n";

}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    createprimeNum(1e3);
    while (t--)
    {
        solve();
    }
    return 0;
}