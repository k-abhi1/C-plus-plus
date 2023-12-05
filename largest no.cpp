
#include <iostream>
using namespace std;

int main()

{
    int a, b, c;
    cout << "Enter fist numbers: ";
    cin >> a ;

    cout << "Enter second numbers: ";
    cin >> b ;

    cout << "Enter third numbers: ";
    cin >> c ;
     //input the three number input 
    if (a > b && a > c)
    {
        cout << a << " is the largest number"<<endl;   
    }
    else if (b > a && b > c)
    {
        cout << b << " is the largest number"<<endl;
    }
    else
    {
        cout << c << " is the largest number"<<endl;
    }
    return 0;
}