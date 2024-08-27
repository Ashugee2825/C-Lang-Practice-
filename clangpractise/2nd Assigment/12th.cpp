// 12.	WAP to print reverse of a number.


#include <iostream>

using namespace std;

int main() {
    int number, reversedNumber = 0;

    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    // Temporary variable to store the original number
    int originalNumber = number;

    // Loop to reverse the number
    while (number > 0) {
        // Extract the last digit
        int digit = number % 10;

        // Append the digit to the reversed number
        reversedNumber = reversedNumber * 10 + digit;

        // Remove the last digit
        number /= 10;
    }

    // Output the reverse of the number
    cout << "Reverse of " << originalNumber << " is: " << reversedNumber << endl;

    return 0;
}

