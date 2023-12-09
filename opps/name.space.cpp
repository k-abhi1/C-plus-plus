// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"hello world";
//     return 0;
// }

// #include<iostream>

// int main()
// {
//     std::cout<<"hello world";
//     return 0;
// }



#include<iostream>
namespace A
{
    int a;
    void print()
    {
        a=10;
       std:: cout<<a;

    }
}
namespace B
{
    int a;
    void print()
    {
        a=20;
       std::cout<<a;
    }
};

int main()
{
    A::print();
    B::print();
    return 0;
    
}
