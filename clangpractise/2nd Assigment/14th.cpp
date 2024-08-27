//14.	WAP to print the Fibonacci series in a given range.
#include <iostream>

using namespace std;

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    // Input the range
    cout << "Enter the range (number of terms): ";
    cin >> n;

    cout << "Fibonacci Series up to " << n << " terms: ";

    // Print the first two terms of the Fibonacci series
    cout << firstTerm << " " << secondTerm << " ";

    // Generate and print the rest of the Fibonacci series
    for (int i = 3; i <= n; ++i) {
        nextTerm = firstTerm + secondTerm;
        cout << nextTerm << " ";
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0;
}




