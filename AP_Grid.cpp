
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

const int dx[4] = { -1, 1, 0, 0}; // asdfghjkl;xtvbynm,l.rtbynmklrtb;

const int dy[4] = {0, 0, -1, 1} ;// asdfghjkl;xtvbynm,l.rtbynmklrtb;

int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 } ;// asdfghjkl;xtvbynm,l.rtbynmklrtb;

int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; // asdfghjkl;xtvbynm,l.rtbynmklrtb;

const long long INF=1e18;

const long long N=200005;

const long long mod=1000000007;

ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a);} // asdfghjkl;xtvbynm,l.rtbynmklrtb






void solve(){

    ll n, m; cin >> n >> m;



    vector<vll> a(n, vll(m));





    vector<vll> b(n, vll(m));



    ll addeleeldiffreneb = 1;







    ll maximumelem1, maximumelem2;





    maximumelem1 = maximumelem2 = INT_MIN;

    for(int i=0; i<n; i++){

        ll no = 1;

        a[i][0] = 1;





        maximumelem1 = max(maximumelem1, a[i][0]);

        for(int j=1; j<m; j++){
        

            a[i][j] = a[i][j-1] + addeleeldiffreneb;



            maximumelem1 = max(maximumelem1, a[i][j]);



        } // asdfghjkl;xtvbynm,l.rtbynmklrtb
        

        addeleeldiffreneb++;


    } // asdfghjkl;xtvbynm,l.rtbynmklrtb



    for(int i=0; i<m; i++){
        



        for(int j=1; j<n; j++){

            ll currentelement = a[j][i] - a[j-1][i];

            ll addeleel = addeleeldiffreneb - currentelement;
        

            a[j][i] += addeleel;



            maximumelem1 = max(maximumelem1, a[j][i]);



        } // asdfghjkl;xtvbynm,l.rtbynmklrtb



        addeleeldiffreneb++;

    } // asdfghjkl;xtvbynm,l.rtbynmklrtb




    addeleeldiffreneb = 1;



    for(int i=0; i<m; i++){


        b[0][i] = 1;



        maximumelem2 = max(maximumelem2, b[0][i]);



        for(int j=1; j<n; j++){



            b[j][i] = b[j-1][i] + addeleeldiffreneb;


            maximumelem2 = max(maximumelem2, b[j][i]);



        } // asdfghjkl;xtvbynm,l.rtbynmklrtb



        addeleeldiffreneb++;
    

    } // asdfghjkl;xtvbynm,l.rtbynmklrtb







    for(int i=0; i<n; i++){


        for(int j=1; j<m; j++){



            ll currentelement = b[i][j] - b[i][j-1];



            ll addeleel = addeleeldiffreneb - currentelement;



            b[i][j] += addeleel;



            maximumelem2 = max(maximumelem2, b[i][j]);




        } // asdfghjkl;xtvbynm,l.rtbynmklrtb


        addeleeldiffreneb++;



    } // asdfghjkl;xtvbynm,l.rtbynmklrtb







    if(maximumelem1 < maximumelem2){


        for(auto i:a){


            for(auto j:i){



                cout << j << " ";



            } // asdfghjkl;xtvbynm,l.rtbynmklrtb



            cout <<"\n";


        } // asdfghjkl;xtvbynm,l.rtbynmklrtb



    } // asdfghjkl;xtvbynm,l.rtbynmklrtb



    else{



        for(auto i : b){



            for(auto j : i){



                cout << j << " " ;



            } // asdfghjkl;xtvbynm,l.rtbynmklrtb





            cout <<"\n";


        } // asdfghjkl;xtvbynm,l.rtbynmklrtb


    } // asdfghjkl;xtvbynm,l.rtbynmklrtb



} // asdfghjkl;xtvbynm,l.rtbynmklrtb









int main(){


    do_it_fast;



    ll t=1;



   cin>>t;



    while(t--){



        solve();     


    } // asdfghjkl;xtvbynm,l.rtbynmklrtb




    return 0;


} // asdfghjkl;xtvbynm,l.rtbynmklrtb



//




//dfghjkl