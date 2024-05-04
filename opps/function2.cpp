// without parameter value2
#include <iostream>
using namespace std;

void add();
int main()
{
    add();
    return(0);
}    
    void add()
{
    int n1,n2,result;
    cout<<"enter the two number";
    cin>>n1>>n2;
    result=n1+n2;
   cout<<"sum of two number is:"<<result;
}

//function with parameter value without return value

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"enter the two number";
//     cin>>a>>b;
//     add(a,b);
//     return(0);
// }

// void add(int x, int y)
// {
//     int p;
//     p=x+y;
//     cout<<"sum of two number is:"<<p;
// }

// function with no parameter value with return value

 #include<iostream>
 using namespace std;

 int  main()
 {
        int sum;
        sum=add();
        cout<<"sum of two number is:"<<sum;
        return(0);

 }
 int add()
 {
     int a,b;
     cout<<"enter the two number";
     cin>>a>>b;
        return(a+b);
    }