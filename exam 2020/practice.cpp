#include<iostream>
using namespace std;
class demo
{
    int x,y;
    static int z;
    public:
    void display(int a,int b)
    {
        x=a;
        y=b;
        z=z+1;
    }


}