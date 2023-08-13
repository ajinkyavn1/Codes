#include<bits/stdc++.h>
typedef long long int ll;
#define do_it_fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vll vector<long long int>
#define pll pair<long long int, long long int>
using namespace std;

void postcompute(ll &Result,ll &Steps, ll curr){
    Result += curr;

    Steps = __gcd(Steps, curr);
}
long long DoDFS(ll ind, ll par, map<ll, vll> &disigions, vll &arr, vll &PreSteps, vll &Resultarr)
{

    long long Steps = arr[ind];

    long long Result = 0;

    for (auto &i : disigions[ind])
    {

        if (i != par)
        {

            ll curr = DoDFS(i, ind, disigions, arr, PreSteps, Resultarr);

            postcompute(Result,Steps,curr);
        }
    }

    PreSteps[ind] = Steps;

    Resultarr[ind] = Result;

    return Steps;
}

void Searchindata(ll ind, ll par, ll su, map<ll, vll> &disigions, vll &arr, vll &PreSteps, vll &Resultarr, ll &count)
{

    count = max(count, su);

    for (auto &i : disigions[ind])
    {

        if (i != par)
            Searchindata(i, ind, su - PreSteps[i] + Resultarr[i], disigions, arr, PreSteps, Resultarr

                 ,
                 count);
    }
}
void precompute(ll size, map<ll, vll> &disigions)
{
    for (ll i = 0; i < size - 1; i++)
    {

        ll axiesx, axiesy;

        cin >> axiesx >> axiesy;
        axiesx--;
        axiesy--;

        disigions[axiesx].push_back(axiesy);

        disigions[axiesy].push_back(axiesx);
    }
}

void solve()
{

    ll size;

    cin >> size;

    vll inputarray(size);

    vll PreSteps(size);

    vll Resultarr(size);

    ll Steps = 0;

    map<ll, vll> disigions;

    for (long long i = 0; i < size; ++i)
    {

        cin >> inputarray[i];
    }
    precompute(size, disigions);
    ll isok = DoDFS(0, -1, disigions, inputarray, PreSteps, Resultarr);

    Searchindata(0, -1, Resultarr[0], disigions, inputarray, PreSteps, Resultarr, Steps);

    cout << Steps << "\n";
}
int main(){
    do_it_fast;
    ll t=1; cin>>t;
    while(t--){
        solve();     
    }
    return 0;
}