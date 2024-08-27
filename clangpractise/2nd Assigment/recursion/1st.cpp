// 1.	WAP for printing all natural numbers till 20.
#include <iostream>

using namespace std;

// Function to print natural numbers up to n
void printNaturalNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    // Call the function to print natural numbers up to 20
    cout << "Natural numbers up to 20: ";
    printNaturalNumbers(20);
    return 0;
}
