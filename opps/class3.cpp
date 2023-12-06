#include <iostream>
using namespace std;

class inductio
{
private:
    string name;
    int rig;
    int rollno;
    string college;

public:
    void n()
    {
        name = "abhishek kumar";
        cout << name << endl;
    }

    void r1()

    {

        rig = 22153153050 << rig;
        cout << rig << endl;
    }

    void r2()
    {
        rollno = 22105037;
        cout << rollno << endl;
    }
    void c()
    {
        college = "g e c arwal college";
        cout << college << endl;
    }
};

int main()
{
    inductio obj;
    obj.n();
    obj.r1();
    obj.r2();
    obj.c();
}