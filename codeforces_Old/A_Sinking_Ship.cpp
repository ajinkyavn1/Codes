#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    ll i, j, k;
    ll n;
    string name, type, captain;
    vector<string> woman;
    vector<string> man;
    vector<string> rat;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> name >> type;

        if (type == "captain")
            captain = name;

        else if (type == "rat")
            rat.push_back(name);

        else if (type == "woman")
            woman.push_back(name);

        else if (type == "child")
            woman.push_back(name);

        else if (type == "man")
            man.push_back(name);
    }

    for (i = 0; i < rat.size(); i++)
        cout << rat[i] << endl;

    for (i = 0; i < woman.size(); i++)
        cout << woman[i] << endl;

    for (i = 0; i < man.size(); i++)
        cout << man[i] << endl;

    cout << captain << endl;
}

int main(){
    do_it_fast;
    ll t=1;
    // cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}