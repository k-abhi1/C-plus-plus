//1. wap in c++ to input a power (mn)and the find the power of those number using-negation oprator
// overloading unary operator overloading

#include<iostream>
using namespace std;

class power{
    int m,n;
    public:
    power(int x,int y){
        m=x;
        n=y;
    }
    void display(){
        cout<<"m="<<m<<" n="<<n<<endl;
    }
    power operator-(){
        m=-m;
        n=-n;
        return power(m,n);
    }
};

int main(){
    power p(2,3);
    p.display();
    -p;
    p.display();
    return 0;
}

//2.wap in c++ to i/p any two complex number and them summation of complex no using
//oprator overloading(binary operator overloading)

#include<iostream>
using namespace std;

class complex{
    int real,imag;
    public:
    complex(int x,int y){
        real=x;
        imag=y;
    }
    void display(){
        cout<<"real="<<real<<" imag="<<imag<<endl;
    }
    complex operator+(complex c){
        complex temp(0,0);
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};

int main(){
    complex c1(2,3),c2(4,5),c3;
    c1.display();
    c2.display();
    c3=c1+c2;
    c3.display();
    return 0;
}