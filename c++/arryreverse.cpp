#include<iostream>
using namespace std;

void printReverse(int arr[], int size) {

    for(int i = 0; i < size/2; i++) {
        swap(arr[i], arr[size-i-1]);
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nReversed array: ";
    printReverse(arr, size);

    return 0;
}