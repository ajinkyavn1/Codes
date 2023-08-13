#include<bits/stdc++.h>
using namespace std;

// class Complex{
//     public:
//         int img,real;

//     Complex(){
//         img=0,
//         real=0;
//     }
//     Complex(int real,int img){
//         this->real=real;
//         this->img=img;
//     }


//     Complex  operator+(Complex c){
//         Complex c1;
//         c1.real=real+c.real;
//         c1.img=img+c.img;
//         return c1;
//     }

//    virtual void display(){
//         cout<<real<<" "<<img;
//    }
    
// };


// class MyComplex:public Complex{
//     public:
//     string str;
//     MyComplex(int rel,int img,string str){
//         real=rel;
//         this->img=img;
//         this->str=str;

//     }
//     void display(){
//         cout<<real<<" "<<img<<" "<<str;
//     }
// };


class A{
    public:
    virtual void print(){
        cout<<"juagsdk";
    }
};
class B : public A{

    public:
     void print(int x) {
        cout<<"Derived";
    }
};
int main(){
//   Complex *c=new MyComplex(11,-1,"dsfdsgf");
A *c=new B();
  c->print();
  return 0;
}
