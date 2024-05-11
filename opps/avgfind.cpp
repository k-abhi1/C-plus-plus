// w a p in c++ to i/p any two integer nummber and then find the avrage of both number using friend function b/w
//two class?

#include <iostream>
using namespace std;

class B;

class A
{
    int a;

public:
    void getdata(int x)
    {
        a = x;
    }
    friend void avg(A, B);
};

class B
{
    int b;
    friend void avg(A, B);
    public:
    void getdata(int y)
    {
        b = y;
    }
};

void avg(A o1, B o2)
{
    cout << "The average value of a and b is: " << float(o1.a + o2.b) / 2 << endl;
}

int main()
{
    A obj1;
    B obj2;
    obj1.getdata(5);
    obj2.getdata(6);
    avg(obj1, obj2);
    return 0;
}

// function overrloding using class and object


#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void setdata(int x){
        a=x;
        b=0;
    }
    void showdata(){
        cout<<"a: "<<a<<" b: "<<b<<endl;
    }
};

int main(){
    complex c1;
    c1.setdata(3,4);
    c1.showdata();
    complex c2;
    c2.setdata(5);
    c2.showdata();
    return 0;
}

// function overrloding using friend function

#include<iostream>
using namespace std;


class complex{
    int a,b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void showdata(){
        cout<<"a: "<<a<<" b: "<<b<<endl;
    }
    friend complex sum(complex,complex);
};
complex sum(complex c1,complex c2){
    complex c3;
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    return c3;
}

int main(){
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=sum(c1,c2);
    c3.showdata();
    return 0;
}

//impliment the concept empolyee records using hierarchical inheritance


#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    float salary;
    employee(int inpId){
        id=inpId;
        salary=34.0;
    }
    employee(){}
};

class programmer:public employee{
    public:
    int languageCode;
    programmer(int inpId){
        id=inpId;
        languageCode=9;
    }
    programmer(){}
};
int main(){
    employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languageCode<<endl;
    cout<<skillf.id<<endl;
    cout<<skillf.salary<<endl;
    return 0;
}

// wap defult constructer and paramecterized constructer avrage 

#include<iostream>
using namespace std;

class a{

    a(){
        int a,b,avg;
        cout<<"enter the number";
        cin>>a;
        avg=a+b/2;
        cout<<"avrage"<<sum;

        }
    
};
int main(){
    a a1;
    return 0;
}
