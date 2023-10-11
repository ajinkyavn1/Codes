#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string s; cin >> s;
    s += ',';
    ll res = 0;
    string output = "";
    for(auto ii : s){
        if(ii == ','){

            ll n = res;
            res = 0;

            ll ans = 0;
            for(int i=0; i<n; i++){
                ans *= 10;
                ans += 9;
            }

            while(ans >= 0){
                if(ans % n == 0)break;
                ans--;
            }
            output += to_string(ans) + ",";
            continue;
        }

        res *= 10;
        res += ii - '0';
    }
    output.pop_back();
    cout << output;
    return 0;
}