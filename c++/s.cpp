// w a p to parfom the folling arthmetic oprection in comlex no using a structure 
#include<iostream>
using namespace std;

int main()
{
    struct complex
    {
        int real;
        int img;
    };

    complex c1,c2,c3; // enter tow no

    cout<<"Enter the real and img part of first complex no: ";
    cin>>c1.real>>c1.img;

    cout<<"Enter the real and img part of second complex no: ";
    cin>>c2.real>>c2.img;

    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    
    cout<<"The sum of two complex no is: "<<c3.real<<"+"<<c3.img<<"i"; 
    return 0;
}