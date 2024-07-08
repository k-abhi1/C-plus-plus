#include <iostream>
using namespace std;
#include <fstream>

int main() {
   ifstream file("example.txt"); // Open the file
    if (!file.is_open()) {
       cerr << "Unable to open file" << endl;
        return 1; // Exit with error code
    }

    char ch;
    int count = 0;

    // Read each character from the file and count it
    while (file.get(ch)) {
        count++;
    }

    file.close(); // Close the file

   cout << "The number of characters in the file is: " << count << endl;
    return 0;
}

// #include <iostream>
// #include <fstream`>

// int main() {
//     std::ifstream file("example.txt"); // Open the file
//     if (!file.is_open()) {
//         std::cerr << "Unable to open file" << std::endl;
//         return 1; // Exit with error code
//     }

//     char ch;
//     int count = 0;

//     // Read each character from the file and count it
//     while (file.get(ch)) {
//         count++;
//     }

//     file.close(); // Close the file

//     std::cout << "The number of characters in the file is: " << count << std::endl;
//     return 0;
// }
