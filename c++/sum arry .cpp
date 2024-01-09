// w a p to find the sum of all element in arry ?


// #include<iostream>
// using namespace std;

// int main()
// {
//     int i;
//     int arry[5];
//     int sum=0;
//     for(i=0;i<5;i++)
//     {
//         cin>>arry[i];
//     }
//     for(i=0;i<5;i++)
//     {
//         sum=sum+arry[i];
//     }
//     cout<<"sum of all element in arry is "<<sum<<endl;
//     return 0;
// }


#include<iostream>

int findSum(int arry[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arry[i];
    }
    return sum;
}

int main() {
    int arry[] = {1, 2, 3, 4, 5};
    int size = sizeof(arry) / sizeof(arry[0]);

    std::cout << "Sum of all elements in array: " << findSum(arry, size) << std::endl;

    return 0;
}