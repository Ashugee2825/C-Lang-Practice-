// 15.	WAP to check whether the number entered is palindrome or not.
#include <iostream>

using namespace std;

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    // Store the original number
    originalNumber = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reversedNumber) {
        cout << "The number " << originalNumber << " is a palindrome." << endl;
    } else {
        cout << "The number " << originalNumber << " is not a palindrome." << endl;
    }

    return 0;
}
