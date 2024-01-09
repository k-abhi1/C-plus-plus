// w a p find the to minum number in a arry 

#include<iostream>
using namespace std;

int main()
{
    int arr[10],i,min;
    cout<<"Enter the element of arry"<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    min=arr[0];
    for(i=0;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The minum number in a arry is "<<min<<endl;
    return 0;
}