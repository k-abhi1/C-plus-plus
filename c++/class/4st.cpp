#include <iostream>
using namespace std;

int main()
{
    int boy;
    cout << "enter the age";
    cin >> boy;

    if (boy > 1000 <=2000)
    {
        cout << "market";
    }

    else if (boy > 2100 <=3000)
    {
        cout << "parking" << endl;
    }
    else if (boy <= 5000)
    {
        cout << "air port";
    }
    else   
        {
            cout << "not";
        }
    return 0;
}
