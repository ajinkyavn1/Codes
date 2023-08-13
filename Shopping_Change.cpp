#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>;
#define pll pair<long long int, long long int>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> arr(n + 2, 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int i = 1, curr = 1;

    while (i <= n)
    {
        if (curr)
        {
            arr[i] = arr[i + 1] * 2;
            i += 2;
        }
        else
        {
            arr[i] = arr[i - 1] * 2;
            i++;
        }

        curr = 1 - curr;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n + 2, 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int i = 1, curr = 1;

    while (i <= n)
    {
        if (curr)
        {
            arr[i] = arr[i + 1] * 2;
            i += 2;
        }
        else
        {
            arr[i] = arr[i - 1] * 2;
            i++;
        }

        curr = 1 - curr;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}