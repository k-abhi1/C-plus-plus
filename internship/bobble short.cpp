//wap to enter 10 element of an array and short the 10 element is assending order using bobble short accending order
#include<iostream>
using namespace std;

int main()
{
    int bobbleshort(int arr[] int n)
    {
        int temp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                }
            }
        }
    }
    int n;
    int arr[10];
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the element of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bobbleshort(arr,n);
    cout<<"sorted array is";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}