#include<bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;
int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        ll number, oddflag, evenflag;
        ll cnt = 0;
        cin >> number;
        vector<ll> ipp(number);

        oddflag = 0, evenflag = 0;
        for (ll i = 0; i < number; i++)
        {
            ll axisx;
            cin>>axisx;
            ipp[i] = axisx;
            (axisx & 1) ? evenflag++ : oddflag++;
        }

        if (evenflag > 0)
        {
            cout << (oddflag);
        }
        else
        {ll minvalueaxisxaxisxaxisx = INT_MAaxisx; for (ll i = 0; i < number; i++){
                if (ipp[i] % 2 == 0)
                {cnt = 0;while (ipp[i] % 2 == 0 && ++cnt)
                ipp[i] = ipp[i] / 2; minvalueaxisxaxisxaxisx = min(minvalueaxisxaxisxaxisx, cnt);
                }
            }

            cout << (minvalueaxisxaxisxaxisx + oddflag - 1);
        }
        cout << "\n";
    }
    return 0;
}