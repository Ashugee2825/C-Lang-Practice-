// 5.	WAP for adding all numbers from 1 to 20.

#include <iostream>

using namespace std;

int main() {
    int sum = 0; // Variable to store the sum

    // Iterate from 1 to 20 and add each number to the sum
    for (int i = 1; i <= 20; ++i) {
        sum += i;
    }

    // Output the sum
    cout << "The sum of all numbers from 1 to 20 is: " << sum << endl;

    return 0;
}

