// w a p finde the sum of negetive and posetive integer

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10],i,sum=0;
//     cout<<"Enter the element of arry"<<endl;
//     for(i=0;i<10;i++){
//         cin>>arr[i];
//     }
//     for(i=0;i<10;i++){
//         if(arr[i]<0){
//             sum=sum+arr[i];
//         }
//     }
//     cout<<"Sum of negetive integer is "<<sum<<endl;
//     return 0;
// }


#include <stdio.h>

int main() {
    int arr[10], i, sumNegative = 0, sumPositive = 0;

    printf("Enter the elements of the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (arr[i] < 0) {
            sumNegative += arr[i];
        } else if (arr[i] > 0) {
            sumPositive += arr[i];
        }
    }

    printf("Sum of negative integers: %d\n", sumNegative);
    printf("Sum of positive integers: %d\n", sumPositive);

    return 0;
}
