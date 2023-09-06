#include<bits/stdc++.h>
using namespace std;


void print(int dp[], int n){
    for(int i = 0; i < n + 2; i++)
        cout << dp[i] << " ";
    cout << endl;
}
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    int dp[n + 10];
    memset(dp, 0, sizeof dp);
    print(dp, n);
    for(int i = n-1; i>=0; i--){
        dp[i] = max(dp[i + 1], dp[i + 2] + nums[i]);
        print(dp, n);
    }
    return dp[0];
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto  &i : v)
		cin >> i;
	cout << maximumNonAdjacentSum(v) << endl;
}
