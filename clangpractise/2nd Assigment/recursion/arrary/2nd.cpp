// 2.	Write a program that asks the user to take array of 10 integers. 
// The program must output the largest element in the array, 
// and the index at which that element was found.

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

    // Find the largest element and its index
    int maxElement = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    // Output the result
    cout << "Largest element: " << maxElement << endl;
    cout << "Index of largest element: " << maxIndex << endl;

    return 0;
}
