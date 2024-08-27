#include <iostream>

using namespace std;

int main() {
    int num1, num2, sum; // Declare variables to store the numbers and their sum

    // Ask the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Ask the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Add the two numbers and store the result in the sum variable
    sum = num1 + num2;

    // Output the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

   return 0;
}
