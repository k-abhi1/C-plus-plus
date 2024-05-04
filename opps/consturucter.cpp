#include<iostream>
using namespace std;
class A
{
    int x;
    static int c;
    public:
    A(int a)
    {
        x=a;
        c++;
        cout<<"block consturucter="<<c<<endl;
    }
    ~A()
    {
        cout<<"block dis="<<c<<endl;
        c--;
    }
}
int A::c;
int main()
{
    A obj1(10),obj2(20),obj3(30);


}