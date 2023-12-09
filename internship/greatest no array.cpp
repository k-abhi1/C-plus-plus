//wap to enter 10 element of an array and print greatest

#include<iostream>
using namespace std;

int main()
{

    int n;
  int arr[10];
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the element of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"greatest no is"<<max;
    return 0;
    
}