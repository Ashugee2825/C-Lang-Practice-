// 2.	WAP for printing all natural numbers in reverse order starting from 20.
#include <iostream>

using namespace std;

// Function to print natural numbers in reverse order from n to 1
void printNaturalNumbersReverse(int n) {
    for (int i = n; i >= 1; --i) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    // Call the function to print natural numbers in reverse order from 20
    cout << "Natural numbers in reverse order starting from 20: ";
    printNaturalNumbersReverse(20);
    return 0;
}
