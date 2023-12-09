//wap to enter 10 elementof an array and enter the serching number and check that the serching number is found or not using binary serdc techniqe
#include <iostream>
#include <algorithm>
using namespace std;
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; 
}

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    sort(arr, arr + 10);

    cout << "Sorted Array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter the number you want to search for: ";
    cin >> key;

    int result = binarySearch(arr, 0, 9, key);

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
