




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



const long long INF=1e18;



const long long N=200005;



const long long moduloopration=1000000007;



ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a);} // End Here block end code end// End Here block end code end// End Here block end code end// End Here block end code end


void solve(){



    ll n; cin >> n;



    vll inputARRAY(n);


    for(auto &i:inputARRAY)cin>> i;







    if(n == 1){



        cout << 1;


        return;



    } // End Here block end code end// End Here block end code end// End Here block end code end// End Here block end code end







    ll prefixnumberixnumberprefixnumberixnumberprefixnumberixnumberprefixnumberixnumber[n], suffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumber[n];



    prefixnumberixnumberprefixnumberixnumberprefixnumberixnumberprefixnumberixnumber[0] = inputARRAY[0];

    suffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumber[n-1] = inputARRAY[n-1];


    for(ll i=1; i<n; i++)
    prefixnumberixnumberprefixnumberixnumberprefixnumberixnumberprefixnumberixnumber[i] = gcd(prefixnumberixnumberprefixnumberixnumberprefixnumberixnumberprefixnumberixnumber[i-1], inputARRAY[i]);



    for(ll i=n-2; i>=0; i--)
    suffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumber[i] = gcd(suffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumber[i+1], inputARRAY[i]);









    ll resultvariableresultvariableresultvariableresultvariableresultvariableresultvariableresultvariableresultvariable = 0;



    for(int i=0; i<n;i++){



        ll tempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberx;



        if(i == 0){

            tempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberx = suffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumber[i+1];




        } // End Here block end code end// End Here block end code end// End Here block end code end// End Here block end code end




        else if(i == n-1){



            tempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberx = prefixnumberixnumberprefixnumberixnumberprefixnumberixnumberprefixnumberixnumber[i-1];


        } // End Here block end code end// End Here block end code end// End Here block end code end// End Here block end code end



        else{

            tempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberx = gcd(prefixnumberixnumberprefixnumberixnumberprefixnumberixnumberprefixnumberixnumber[i-1], suffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumbersuffixnumber[i+1]);





        } // End Here block end code end// End Here block end code end// End Here block end code end// End Here block end code end








        if(tempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberxtempnumberx > 1){






            resultvariableresultvariableresultvariableresultvariableresultvariableresultvariableresultvariableresultvariable++;

        } // End Here block end code end// End Here block end code end// End Here block end code end// End Here block end code end



    } // End Here block end code end// End Here block end code end// End Here block end code end// End Here block end code end


    cout << resultvariableresultvariableresultvariableresultvariableresultvariableresultvariableresultvariableresultvariable;





} // End Here block end code end// End Here block end code end// End Here block end code end// End Here block end code end







int main(){



    do_it_fast;



    ll t=1;



   cin>>t;




    while(t--){


        solve();     


        cout<<"\n";



    } // End Here block end code end// End Here block end code end// End Here block end code end// End Here block end code end



    return 0;



} // End Here block end code end// End Here block end code end// End Here block end code end// End Here block end code end




