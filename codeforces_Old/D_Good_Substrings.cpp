    #include<bits/stdc++.h>
    typedef long long int ll;
    #define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
    #define vll vector<long long int>
    #define pll pair<long long int, long long int>
    using namespace std;

    void solve(){
        string a,b;
        ll k;
        ll mod = 1000000007;
        cin>>a>>b>>k;
        set<pll> st;
        for(int i=0;i<a.size();i++){
            ll bad=0;
            ll h1=0,h2=0;
            ll p1=1,p2=1;
            for(int j=i;j<a.size();j++){
                bad +=( b[a[j] - 'a']=='0'?1:0);
                if(bad>k) break;
                h1 = (h1 + (a[j] - 'a'+1) * p1)%mod;
                h2 = (h2 + (a[j] - 'a'+1)* p2) % mod;
                p1=(p1*31)%mod;
                p2=(p2*29)%mod;
                st.insert({h1,h2});
            }
        
            // cout<<"\n";
        }
    cout<<st.size();
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