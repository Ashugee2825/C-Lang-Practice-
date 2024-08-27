
//3.	Write a program that asks the user to take array of 10 integers. 
//The program will then sort the array in descending order and display it.


#include <iostream>
#include <algorithm>

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

    // Sort the array in descending order
    sort(arr, arr + size, greater<int>());

    // Output the sorted array
    cout << "Sorted array in descending order:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


