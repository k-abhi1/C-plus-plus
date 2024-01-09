/*Write a C++ program that displays all prime numbers between 100 and 500 that arealsopalindrome.*/

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