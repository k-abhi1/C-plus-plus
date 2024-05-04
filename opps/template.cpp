// #include<iostream>
// using namespace std;
// template <class A >

// void print( A x,A y)
// {
// cout<<x<<endl<<y<<endl;
// }

// int main()
// {
//    print(10,20);
//    print('a','b');
//    print(234.34,234.34);
//    print("abhishek","A");

//    return 0;


// }


    //  class template 


#include<iostream>
using namespace std;
template <class A >

class print
{
public:
print(A x, A Y)
{
    cout<<x<<endl<<y<<endl
}
};
int main()
{
    print obj(123.234, 'A');
    return 0;
}