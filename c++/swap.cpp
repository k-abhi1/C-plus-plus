// w a p print arry element in reverse order in swaping meteode

#include<iostream>
using namespace std;

int main()
{
    int arr[10],i,j,temp;
    cout<<"Enter the element of arry"<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    for(i=0,j=9;i<5;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"Reverse order of arry is "<<endl;
    for(i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}