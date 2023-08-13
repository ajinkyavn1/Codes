#include<bits/stdc++.h>
using namespace std;

void makeastring(){

    long long int n; cin >> n;
    string s; cin >> s;

    vector<long long int> v(n, 0);
    long long int m; cin >> m;

    while(m--){
        long long int x; cin >> x;
        x--;
        v[x] ^= 1;
    }
    long long int flag = 0;
    for(long long int i=0; i<n/2; i++){
        flag ^= v[i];
        if(flag){
            swap(s[i], s[n - i  - 1]);
        }
    }
    cout << s;

}

signed main(){
    makeastring();
    return 0;
}
