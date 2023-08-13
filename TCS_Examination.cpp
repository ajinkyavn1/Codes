#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int axisx = a + b + c;
    int axisy = d + e + f;

    if (axisx > axisy)
    {
        cout << "DRAGON" << "\n";
    }
    else if (axisx < axisy)
    {
        cout << "SLOTH" << "\n";
    }
    else if (axisx == axisy)
    {

        if (a > d)
        {
            cout << "DRAGON" << "\n";
        }
        else if (a < d)
        {
            cout << "SLOTH" << "\n";
        }
        else if (a == d)
        {
            if (b > e)
            {
                cout << "DRAGON" << "\n";
            }
            else if (b < e)
            {
                cout << "SLOTH" << "\n";
            }
            else if (b == e)
            {
                if (c > f)
                {
                    cout << "DRAGON" << "\n";
                }
                else if (c < f)
                {
                    cout << "SLOTH" << "\n";
                }
                else if (c == f)
                {
                    cout << "TIE" << "\n";
                }
            }
        }
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