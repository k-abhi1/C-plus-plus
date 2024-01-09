/*Write a C++ program that will ask the user a question with four posible answers. Thequestionshould be asked 20 times. After all the inputs are gathered. The programshouldoutput thenumber of times each answer was selected.*/

#include<iostream>
using namespace std;

int main()
{
    int i, j, n, rev, rem, flag;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Prime numbers between 100 and 500 are: ";
    for(i = 100; i <= n; i++)
    {
        flag = 0;
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0 && i != 1)
        {
            rev = 0;
            int temp = i;
            while(temp != 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }
            if(rev == i)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
    
}


