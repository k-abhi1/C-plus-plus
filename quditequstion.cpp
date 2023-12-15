#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int a,b,c,r1;
   cout<<"enter the x^2 cofecient  ";
   cin>>a;
    cout<<"enter the x cofecient  ";
    cin>>b;
    cout<<"enter the c constant term ";
    cin>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<"the real root of eqaction %fx^2+%fx+%f=0 are r1=%f"a,b,c,r1;
    getch();
    return 0;



}