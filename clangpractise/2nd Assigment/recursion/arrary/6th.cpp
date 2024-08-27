//6.	Write a program that asks the user to take an array of 10 integer and an integer value V and an index value i between 0 and 9.
 //The program must put the value V at the place i in the array, 
 //shifting each element right and dropping off the last element. The program must then write the final array.
#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int arr[size];
    int V, i;

    // Input array of 10 integers
    cout << "Enter " << size << " integers for the array:" << endl;
    for (int j = 0; j < size; ++j) {
        cout << "Enter integer " << j + 1 << ": ";
        cin >> arr[j];
    }

    // Input integer value V
    cout << "Enter an integer value V: ";
    cin >> V;

    // Input index value i between 0 and 9
    cout << "Enter an index value i between 0 and 9: ";
    cin >> i;
    if (i < 0 || i >= size) {
        cout << "Invalid index value. Please enter an index value between 0 and 9." << endl;
        return 1;
    }

    // Shift elements to the right and drop the last element
    for (int j = size - 1; j > i; --j) {
        arr[j] = arr[j - 1];
    }

    // Put value V at index i
    arr[i] = V;

    // Write the final array
    cout << "Final array after inserting V at index i:" << endl;
    for (int j = 0; j < size; ++j) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}
