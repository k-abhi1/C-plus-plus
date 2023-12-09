// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[10],i,j,sr,c=0;
//     cout<<"Enter the elements of the array"<<endl;
//     for(i=0;i<10;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"Enter the element to be serched"<<endl;
//     cin>>sr;
//     for(i=0;i<10;i++)
//     {
//         if(a[i]==sr)
//         {
//             cout<<"Element found at index"<<i<<endl;
//             c++;
//         }
//     }
//     if(c==0)
//     {
//         cout<<"Element not found";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

// Implement binary search function
int binarySearch(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If element is present at the middle
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

        // Else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, high, x);
    }

    // We reach here when element is not present in array
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x;
    cout << "Enter number to search: ";
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found in array";
    return 0;
}



// #include <iostream>
// using namespace std;

// // Implement binary search function
// int binarySearch(int arr[], int low, int high, int x) {
//     if (high >= low) {
//         int mid = low + (high - low) / 2;

//         // If element is present at the middle
//         if (arr[mid] == x)
//             return mid;

//         // If element is smaller than mid, then it can only be present in left subarray
//         if (arr[mid] > x)
//             return binarySearch(arr, low, mid - 1, x);

//         // Else the element can only be present in right subarray
//         return binarySearch(arr, mid + 1, high, x);
//     }

//     // We reach here when element is not present in array
//     return -1;
// }

// int main() {
//     int arr[] = {2, 3, 4, 10, 40};
//     int x;
//     cout << "Enter number to search: ";
//     cin >> x;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int result = binarySearch(arr, 0, n - 1, x);
//     if (result != -1)
//         cout << "Element found at index " << result;
//     else
//         cout << "Element not found in array";
//     return 0;
// }