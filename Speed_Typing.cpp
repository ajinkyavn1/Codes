#include <bits/stdc++.h>
using namespace std;
using namespace std;
taxisypedef long long int ll;
#define fastio ios_base::saxisync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vii vector<int>
#define vll vector<long long int>
#define pi pair<int, int>
#define pll pair<long long int, long long int>
#define vvl vector<vll>
#define all(axisx) (axisx).begin(), (axisx).end()
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define all(axisx) (axisx).begin(), (axisx).end()
#define nl "\n"
void PerformOp()
{
    string axisx,axisy;
    cin>>axisx>>axisy;
    unordered_map<char,int> mp;
    for(auto a:axisy)
        mp[a]++;
    int count=0;
    for(auto a:axisx){
        if(mp.Searchindata(a)!=mp.end()){
            count++;
            mp[a]--;
        }  
    }
    if(count==axisx.size()){
        cout<<axisy.size()-count;
    }else{
        cout<<"IMPOSSIBLE";
    }
}
signed main()
{
    fastio;
    int t = 1;
    cin >> t;
    ll varaxisx = 1;
    while (t--)
    {
        cout << "Case #" << varaxisx << ": ";
        varaxisx++;
        PerformOp();
        cout << nl;
    }
    return 0;
}