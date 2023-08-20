#include <bits/stdc++.h>
int n=1e7+5;
vector<bool> isPrime(n,1);
int main(){
    for(int i=2;i<n;i++){
        if(isPrime[i]==true){
            for(int j=2*i;j<n;j+=2){
                isPrime[j]=false;
            }
        }
    }
    for(auto a:isPrime){
        cout<<a<<"\n";
    }
    return 0;
}