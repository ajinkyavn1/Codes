#include <bits/stdc++.h>
using namespace std;
const int  n=1e7+10;

int main(){
    vector<bool> isPrime(n,1);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<n;++i){
        if(isPrime[i]==true){
            for(int j=2*i;j<n;j+=i){
                isPrime[j]=false;
            }
        }
    }
   for(auto i=0;i<1000;i++){
    cout<<"\n"<<isPrime[i]<<" "<<i;
   }
    return 0;
}
