#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void rev(ll idx,vector<int>  &v){
    if(idx==v.size()/2){
        return;
    }  
    swap(v[idx],v[v.size()-1-idx]);
    rev(idx+1,v);
}
int main()
{

    vector<int> arr(10, 0);
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    rev(0, arr);
    for (auto a : arr)
        cout << a << " ";
    return 0;
}
// Recursion->Backtracking->LinkedList->Graph->Tree->Dynamic_programing