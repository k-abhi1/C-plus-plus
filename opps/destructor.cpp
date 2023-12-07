#include<iostream>
using namespace std;
 int count=0;

class A
{
    public:
    A()
    {
        
        cout<<"object "<<++count<<"created"<<endl;
    }
    ~A()
    {
        cout<<"object "<<count--<<"destroyed"<<endl;
    }

};

int main()
{
    A obj,obj2,obj3;


}