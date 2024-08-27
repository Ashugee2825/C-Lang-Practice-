//4.	WAP for printing all odd numbers from 1 to 20.


#include <iostream>

using namespace std;

int main() {
    // Iterate from 1 to 20 and print each odd number
    for (int i = 1; i <= 20; ++i) {
        // Check if the number is odd
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl; // Move to the next line after printing all odd numbers

    return 0;
}
