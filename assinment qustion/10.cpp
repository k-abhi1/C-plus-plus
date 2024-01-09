/*Write a C++ program that inputs the value of x and range. It then calculates andprint thesumof
the following series 1+1/x+1/x^2+1/x^3+1/x^4+......*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x, range, i;
    float sum = 0;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of range: ";
    cin >> range;
    for(i = 0; i <= range; i++)
    {
        sum = sum + pow(x, i);
    }
    cout << "The sum of the series is: " << sum;
    return 0;
}