#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

ll get(int i,int j,string input){

    return stoi(input.substr(i, j));
}
void docalculation(ll &currHr,ll &currMn,ll &incrementhours,ll &incrementmini){
    currHr = (currHr + incrementhours) % 24;
    currMn = (currMn + incrementmini);

    currHr += currMn / 60;
    currHr %= 24;
    currMn = currMn % 60;
}
bool isqe(ll hr, ll mn)
{
    string ip1 = to_string(hr);
    string ip2 = to_string(mn);

    ip1 = (hr < 10) ? ip1 = "0" + ip1: ip1;

    ip2= (mn<10)?"0" + ip2:ip2;
    
    reverse(ip2.begin(), ip2.end());

    return ip1 == ip2;
}
void solve(){
    string input;
    cin>>input;
    ll len;
    cin >> len;

    ll hours = get(0,2,input);
    ll mini = get(3,2,input);

    ll incrementhours = len / 60;
    ll incrementmini = len % 60;

    bool flag = 1;
    ll currHr = hours, currMn = mini;

    ll result = 0;

    ll flag2 = 1;
    while (flag2)
    {
        result += isqe(currHr, currMn);
        docalculation(currHr, currMn, incrementhours, incrementmini);
        if (currHr == hours && currMn == mini) break;
    }

    cout << result<<"\n";
}

int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}
