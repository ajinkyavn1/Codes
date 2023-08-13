#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define sz(x)           (int)((x).size())
#define pb              push_back
#define all(x)          (x).begin(),(x).end()
#define ff 				first
#define ss              second
#define pll pair<long long int, long long int>
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
const int dx[4] = { -1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
const long long INF=1e18;
const long long N=200005;
const long long mod=1000000007;
ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a);}
void helper(int index, int target, vector<int>&nums, long long &ma, vector<int>&ds){
       
        if(target == 0){
          long long int x=0;
          for(auto a:ds)
           {
            x=x*10+a;
           }
           ma=min(x,ma);
            return;
        }
        for(int i = index; i< nums.size(); i++){
            if(nums[i] > target) break;   
            
            ds.push_back(nums[i]);
            helper(i+1, target- nums[i], nums, ma, ds);
            ds.pop_back();
        }
        
}
void solve(){
    int sum;
    cin>>sum;
    vector<int> nums(9,0);
    long long ma=INT_MAX;
    for(int i=1;i<=9;i++)
      nums[i-1]=i;
     vector<vector<int>>ans;
        vector<int>ds;
        helper(0, sum, nums, ma, ds);
    cout<<ma<<"\n";
    
}
 
int main(){
    do_it_fast;
    ll t=1;
    cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}
