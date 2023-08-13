#include<bits/stdc++.h>
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

void maincode(){
    string str;
    int n, k;
    cin >> n >> k >> str;
    // cout<<n<<" "<<str<<" "<<k;
    set<char> mp;
    for (auto ele : str)
    {
        mp.insert(ele);
    }
    if (mp.size() == 1)
    {
        cout << "1\n";
        return;
    }
    if(k==0){
        cout << "1\n";
        return;
    }
    bool flag=false;
    int i=0;
    int j=mp.size()-1;
    while(j>1){
        if(str[i]==str[j]){
            flag=true;
            
        }else{
            flag=false;
            break;
        }
        --j;
        ++i;
    }

    cout<<(flag?1:2)<<"\n";
}
signed main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        maincode();
    }
    return 0;
}