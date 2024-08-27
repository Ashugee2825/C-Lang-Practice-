// 1.	Write a program that asks the user to take array of 10 integers.
// The program must compute and write how many integers are greater than or equal to 10.


#include <iostream>

using namespace std;


int main() {
    const int size = 10;
    int arr[size];

    // Input array elements from the user
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Compute the count of integers greater than or equal to 10
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 10) {
            count++;
        }
    }

    // Output the result
    cout << "Number of integers greater than or equal to 10: " << count << endl;

    return 0;
}

 
