// 103.	WAP for finding sum of all odd numbers till 20.

#include <iostream>

using namespace std;

// Function to find the sum of all odd numbers till n
int sumOfOddNumbers(int n) {
    int sum = 0;
    // Iterate from 1 to n
    for (int i = 1; i <= n; ++i) {
        // Check if the current number is odd
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    // Call the function to find the sum of odd numbers till 20
    int result = sumOfOddNumbers(20);
    cout << "Sum of odd numbers till 20: " << result << endl;
    return 0;
}
