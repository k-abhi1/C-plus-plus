//wap to enter 10 element of an array and swap the two consecutive element
#include <iostream>
using namespace std;

int main() {
    
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Original Array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;
    for (int i = 0; i < 9; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    cout << "Array after swapping consecutive elements: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    return 0;
}
