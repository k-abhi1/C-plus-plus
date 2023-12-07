// #include<iostream>
// using namespace std;

// class A
// {
//     int a,b;
//     public:
//     A()
//     {
//         a=10;b=20;
//         cout<<a<<endl<<b;
//     }

// };

// int main()
// {

//     A obj;

//     return 0;

// }

// #include<iostream>
// using namespace std;

// class A
// {

//     public:
//     A(int a,int b)
//     {

//         cout<<a<<endl<<b;
//     }

// };

// int main()
// {

//     A obj(100,200);

//     return 0;

// }

#include <iostream>
using namespace std;

class A
{
    int x, y;

public:
    A(int a, int b)
    {
        x = a;
        y = b;
        cout << x << endl
         << y;
    }
    A(A &ref)
    {
        x = ref.x;
        y = ref.y;
        cout << x << endl
         << y;
    }
};

int main()
{

    A obj(100, 200);
    A obj2 = (obj);

    return 0;
}