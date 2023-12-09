#include<iostream>
using namespace std;

int main()
{
    int a[10],i,j,t;
    cout<<"Enter the elements of array: ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                t=a[j];
                a[i]=a[j+1];
                a[j+1]=t;
                
            }
        }
    }
    cout<<"Sorted array is: ";
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
    
}