//wap to enter 5-5 element of to array and joint conccent the both element array to third element
#include<iostream>
using namespace std;

int main()
{
   const int size = 5;
    int array1[size];
    int array2[size];
    int concatenatedArray[size * 2];
    int i, j;
    cout<<"Enter the elements of array1: ";
    for(i=0;i<size;i++)
    {
        cin>>array1[i];
    }
    cout<<"Enter the elements of array2: ";
    for(i=0;i<size;i++)
    {
        cin>>array2[i];
    }
    for(i=0;i<size;i++)
    {
        concatenatedArray[i] = array1[i];
    }
    for(i=size, j=0;i<size*2;i++, j++)
    {
        concatenatedArray[i] = array2[j];
    }
    cout<<"Concatenated array is: ";
    for(i=0;i<size*2;i++)
    {
        cout<<concatenatedArray[i]<<" ";
    }
    return 0;
    
}