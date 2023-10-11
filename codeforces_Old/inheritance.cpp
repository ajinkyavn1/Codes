#include<bits/stdc++.h>
using namespace std;

 class ABC{
public: 
    int x,y;
    ABC(int x,int y){

        this->x=x;
        this->y=y;
    }
     void display(){
        cout<<x<<" "<<y<<"\n";
    }
};

class BCD :public ABC{
    public:
    string z;
    BCD(int x,int y,string z) : ABC(x,y){
       
        this->z=z;
    }
     void display(){
        cout<<x<<" "<<y<<" "<<z<<"\n";
    }
};
int main(){

    BCD a(10,120,"dsfdsf");

    a.display();
    return 0;
}
