// 10.	WAP to check whether a number is prime or not.

#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    // 0 and 1 are not prime numbers
    if (n <= 1) {
        return false;
    }
    
    // Check for divisibility by numbers from 2 to sqrt(n)
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false; // If n is divisible by any number, it's not prime
        }
    }
    
    return true; // If no divisor found, n is prime
}

int main() {
    int number;

    // Input the number to check for primality
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is prime and output the result
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
