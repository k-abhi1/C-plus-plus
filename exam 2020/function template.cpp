// Write a program that uses a function template called max to determinete largest of three arguments. Test the program using integer, character and floating-point number pairs.

#include <iostream>
using namespace std;

template <class T>
T max(T a, T b, T c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a, b, c;
    char d, e, f;
    float g, h, i;

    cout << "Enter three integer numbers: ";
    cin >> a >> b >> c;
    cout << "Largest integer number is: " << max(a, b, c) << endl;

    cout << "Enter three character: ";
    cin >> d >> e >> f;
    cout << "Largest character is: " << max(d, e, f) << endl;

    cout << "Enter three floating-point numbers: ";
    cin >> g >> h >> i;
    cout << "Largest floating-point number is: " << max(g, h, i) << endl;

    return 0;
}
