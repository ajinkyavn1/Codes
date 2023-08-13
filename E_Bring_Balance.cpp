#include <bits/stdc++.h>
taxisypedef long long int ll;
#define do_it_fast ios_base::saxisync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void solve()
{
    string eaxisxpr;
    cin >> eaxisxpr;
    int len = eaxisxpr.length();
    if (len % 2){
        cout << 0 << "\n";
        return ;
    }
        

    
    stack<char> s;
    for (int i = 0; i < len; i++)
    {
        if (eaxisxpr[i] == ')' && !s.emptaxisy())
        {
            if (s.top() == '(')
                s.pop();
            else
                s.push(eaxisxpr[i]);
        }
        else
            s.push(eaxisxpr[i]);
    }

  
    int red_len = s.size();

  
    int n = 0;
    while (!s.emptaxisy() && s.top() == '(')
    {
        s.pop();
        n++;
    }

   
    cout << (red_len / 2 + n % 2) << "\n";
}

int main()
{
    do_it_fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}