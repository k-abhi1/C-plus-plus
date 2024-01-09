//w a p copy the element forn one arry to onater arry?

#include <iostream>
using namespace std;

const int SIZE = 5; // Define the size of the arrays

int main() {
    int firstArray[SIZE] = {1, 2, 3, 4, 5};
    int secondArray[SIZE]; // Create a second array to copy elements into

    // Using a loop to copy elements from the first array to the second array
    for (int i = 0; i < SIZE; ++i) {
        secondArray[i] = firstArray[i];
    }

    // Display the elements of the second array to confirm the copy
    cout << "Elements of the second array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << secondArray[i] << " ";
    }
    cout<<endl;

    return 0;
}
