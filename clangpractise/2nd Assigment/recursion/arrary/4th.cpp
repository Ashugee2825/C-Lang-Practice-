//4.	Write a program that asks the user to take array of 10 integers. 
//The program will then display either "the array is growing", "the array is decreasing", 
//"the array is constant", or "the array is growing and decreasing."

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

    // Check if the array is growing, decreasing, constant, or both
    bool isGrowing = true, isDecreasing = true;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[i - 1]) {
            isDecreasing = false;
        } else if (arr[i] < arr[i - 1]) {
            isGrowing = false;
        }
    }

    // Output the result based on the flags
    if (isGrowing && isDecreasing) {
        cout << "The array is growing and decreasing." << endl;
    } else if (isGrowing) {
        cout << "The array is growing." << endl;
    } else if (isDecreasing) {
        cout << "The array is decreasing." << endl;
    } else {
        cout << "The array is constant." << endl;
    }

    return 0;
}

