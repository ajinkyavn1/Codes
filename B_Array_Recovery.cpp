#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
const ll MAX = 1e6;
const ll max_sum = 163 ;
vector < bool > primes(MAX+1 , true);
void sieve(){
    primes[0] = primes[1] = false;
    for(ll i = 2 ; i <= MAX ; i++){
        if(primes[i]){
            for(ll j = i*i ; j <= MAX ; j+=i)
                primes[j] = false;
        }
    }
}
ll dfs(ll idx ,ll sum ,ll e ,string &s ,ll n ,ll dp[][max_sum][2]){
    
    if( !sum && idx == n){
        return 1;
    }
    if(sum < 0 || idx >= n)
        return 0;
    if(dp[idx][sum][e] != -1)
        return dp[idx][sum][e];
    ll curr = 0  ;
    for(int i = 0 ; i<=9 ; i++){
        if(  e == 1 ){
            if(s[idx ] == '0' + i){
                curr += dfs(idx + 1,sum - i ,1 ,s, n ,dp);
            }
            else if(s[idx] > '0' + i)
                curr += dfs(idx + 1,sum - i ,0 ,s, n ,dp);
        }
        else{
            curr += dfs(idx + 1,sum - i, 0 ,s, n ,dp);
        }
    }
    return dp[idx][sum][e] = curr;   
}

ll digitdp(ll sum , ll num ){
    string s = to_string(num);
    ll n  = s.length();
    ll dp[n][max_sum][2];
    memset(dp , -1 ,sizeof(dp));
    ll idx = 0, e = 0;
    ll res =  0 ;
    for(int i = 0; i <= 9 ;i++){
        if(s[0] == '0' + i){
            res += dfs(1 , sum - i, 1 ,s, n, dp); 
        }
        else if(s[0] > '0' +i){
            res += dfs(1 , sum - i, 0 ,s, n, dp);
        }
    }
    return res;
}

vector<int> maxRevenue(vector<vector<int>> salesRecord){
    int n=salesRecord.size();
    int i=0;
    vector<int> ans(n);
    int max=0;
    while (i<n)
    {
        for(int j=0;j<salesRecord[i].size();j++){
            if(salesRecord[i][j]>max){
                max=salesRecord[i][j];
            }
        }
        ans[i]=max;
        max=0;
        i++;
    }
    return ans;
    
    
}

int main(){
    ll n,k;
    cin>>n>>k;
   vector<int> v;

}