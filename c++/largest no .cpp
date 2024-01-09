// w a p print the largest no diffrence bet ween to arry element

#include<iostream>
using namespace std;

int main()
{
    int arr[10],i,max=0;
    cout<<"Enter the element of arry"<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    for(i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"largest no is "<<max<<endl;
    return 0;
}

