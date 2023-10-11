#include <bits/stdc++.h>
using namespace std;
#define MAX 10
int lcs(int dp[MAX][MAX][MAX], string str1, int n,
                       string  str2, int m, int k)
{

    if (k < 0)
        return -1e7;
 
  
    if (n < 0 || m < 0)
        return 0;
 
    int& ans = dp[n][m][k];
 
 
    if (ans != -1)
        return ans;
 
   
    ans = max(lcs(dp, str1, n - 1, str2, m, k),lcs(dp, str1, n, str2, m - 1, k));

    if (str1[n-1] == str2[m-1])
        ans = max(ans, 1 + lcs(dp, str1, n - 1,str2, m - 1, k));
 
    ans = max(ans, 1 + lcs(dp, str1, n - 1,str2, m - 1, k - 1));
    return ans;
}
int main()
{
    int k = 8;
    string str1="aamge";
    string str2="basic";
    int n = str1.size();
    int m = str2.size();
 
    int dp[MAX][MAX][MAX];
    memset(dp, -1, sizeof(dp));
 
    cout << lcs(dp, str1, n, str2, m, k) << endl;
 
    return 0;
}
