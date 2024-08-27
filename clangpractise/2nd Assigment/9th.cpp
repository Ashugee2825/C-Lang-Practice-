// 9.	WAP to calculate factorial of a number.
#include <iostream>

using namespace std;

// Function to calculate factorial
int factorial(int n) {
    // Base case: Factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: Factorial of n is n * factorial(n - 1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    // Input the number for which factorial is to be calculated
    cout << "Enter the number: ";
    cin >> number;

    // Calculate and output the factorial
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;

    return 0;
}
