#include <bits/stdc++.h>
using namespace std;

int knapsack(int val[],int wt[],int w,int n,vector<vector<int>> &dp){
	if(n==0||w==0){
		return dp[n][w]=0;
	}
	if(dp[n][w]!=-1){
		return dp[n][w];
	}
	int pick=INT_MIN;
	int np=knapsack(val,wt,w,n-1,dp);
	if(wt[n-1]<=w){
		pick=knapsack(val,wt,w-wt[n-1],n-1,dp)+val[n-1];
	}
	return dp[n][w]=max(pick,np);
}
int main(){
	 int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int w = 50;
	int n=3;
	vector<vector<int>> vect(n+1,vector<int>(w+1,-1));
	cout<<knapsack(val,wt,w,n,vect);
}