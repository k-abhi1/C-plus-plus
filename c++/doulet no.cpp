// w a p count the total no of dublcate element in arry?

#include<iostream>
using namespace std;

int main(){
    int arr[10],i,j,count=0;
    cout<<"Enter the element of arry"<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    cout<<"Total no of dublcate element in arry is "<<count<<endl;
    return 0;
} 