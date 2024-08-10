#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the last number of the series (odd number): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
