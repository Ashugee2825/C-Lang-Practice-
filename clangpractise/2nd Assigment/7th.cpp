//7.	WAP for finding sum of all odd numbers till 20.


#include <iostream>

using namespace std;

int main() {
    int sum = 0; // Variable to store the sum

    // Iterate from 1 to 20 and add each odd number to the sum
    for (int i = 1; i <= 20; i += 2) {
        sum += i;
    }

    // Output the sum
    cout << "The sum of all odd numbers from 1 to 20 is: " << sum << endl;

    return 0;
}


