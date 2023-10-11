#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
void calculatedist(ll &number1, ll &number2)
{
    if (number2 > number1)
    {
        swap(number2, number1);
    }
}
ll pre(ll number1, ll number2, ll &steps)
{
    ll d = number1 - number2;

    while (number2 < d)
    {
        steps++;
        number2 = number2 * 2;
        d = number1 - number2;
    }
    return steps + number1 + 1;
}
void solve(){
  
    ll number1, number2;
    cin >> number1 >> number2;
    calculatedist(number1, number2);
    if (number1 == number2)
    {
        cout << number1<<"\n";
        return;
    }
    if (number1 == 0 || number2 == 0)
    {
        cout<<"-1\n";
        return;
    }
    else
    {
        ll steps=0;
        cout << pre(number1, number2, steps) << '\n';
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