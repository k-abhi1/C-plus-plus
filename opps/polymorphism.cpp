// #include<iostream>
// using namespace std;

// class a
// {

// };

// int main()
// {

// }

// to types of polymorphism
// 1. function over loding    compile time polymorphism
// 2. function over rriding

// 1. function over loding    compile time polymorphism

// #include<iostream>
// using namespace std;

// class A
// {
// int num1,num2,s,m;

// public:

// void person1()
// {

//     cout<<"enter two number";
//     cin>>num1>>num2;
//     s=num1+num2;
//     cout<<"addction"<<s<<endl;
// }

// void person(int a,int b)
// {

//     m=a*b;
//     cout<<"maltipliction"<<m<<endl;
// }

// };

// int main()
// {
//     A obj;
//     obj.person1();
//     obj.person(100,200);

// }

// 2. function over rriding

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void person()
//     {
//         cout << "goog morning";
//     }
// };
// class B : public A
// {
// public:
//     void person()
//     {
//         cout << "good night";
//     }
// };

// int main()
// {
//     B obj;
//     obj.B::person();
//     obj.A::person();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void person()
//     {
//         cout << "goog morning";
//     }
// };
// class B : public A
// {
// public:
//     void person()
//     {
//         cout << "good night";
//     }
// };

// int main()
// {
//     A *p;
//     B obj;
//     p = &obj;
//     p->person();
//     return 0;
// }

#include <iostream>
using namespace std;

class A
{
public:
    virtual void person()
    {
        cout << "goog morning";
    }
};
class B : public A
{
public:
    void person()
    {
        cout << "good night";
    }
};

int main()
{
    A *p;
    B obj;
    p = &obj;
    p->person();
    return 0;
}
