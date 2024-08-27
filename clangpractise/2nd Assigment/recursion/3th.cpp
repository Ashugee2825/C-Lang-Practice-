//3.	WAP for printing all even numbers from 1 to 20.

#include <iostream>

using namespace std;

// Function to print all even numbers from 1 to n
void printEvenNumbers(int n) {
    // Iterate from 1 to n
    for (int i = 1; i <= n; ++i) {
        // Check if the current number is even
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    // Call the function to print even numbers from 1 to 20
    cout << "Even numbers from 1 to 20: ";
    printEvenNumbers(20);
    return 0;
}
