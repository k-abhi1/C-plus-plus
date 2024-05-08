#include<iostream>
using namespace std;

class a
{
    public:
    virtual void display()=0;
};
class b:public a
{
    public:
    void display()
    {
        cout<<"Display of class b"<<endl;
    }
};
class c:public a
{
    public:
    void display()
    {
        cout<<"Display of class c"<<endl;
    }
};

int main()
{
    a *p;
    b obj1;
    c obj2;
    p=&obj1;
    p->display();
    p=&obj2;
    p->display();
    return 0;

}