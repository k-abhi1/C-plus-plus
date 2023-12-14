#include <iostream>
using namespace std;

int main()
{
    int a, b, c, choice;
    cout << "enter the first number";
    cin >> a;

    cout << "enter the second number";
    cin >> b;

    cout << "enter the choice";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << a + b;
        break;

    case 2:
        cout << a - b;
        break;

    case 3:

        cout << a * b;  
        break;

    case 4:
        cout << a / b;
        break;

    default:
    cout<<"rong stement"<<endl;
        break;
    }
}
 