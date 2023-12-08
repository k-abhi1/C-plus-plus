#include <iostream>
using namespace std;

int main()
{
    int row, colum;
    cout << "enter the row";
    cin >> row;

    cout << "enter the colum";
    cin >> colum;
      
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=  colum; j++)
        {
            cout << "*";
        }  
        cout << endl;
    }
    return 0;
}