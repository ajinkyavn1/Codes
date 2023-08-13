#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1000000007;
int n,dp[1000005][2];

int solve(int sum, int n, int prev2){
    
    if(sum == n){
        return dp[sum][prev2]=1;
    }
    
    if(sum > n){
        return 0;
    }

    if(dp[sum][prev2] != -1)
        return dp[sum][prev2];

    int res = 0;

    res += solve(sum + 1, n, 0);
    if(prev2 == 0){
        res += solve(sum + 2, n, 1);
    }

    return dp[sum][prev2] = res;
}
signed main()
{
    cin>>n;
    memset(dp, -1, sizeof(dp));
    int res = solve(0, n, 0);
    cout << res;
    return 0;
}
