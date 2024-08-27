//5.	Write a program which takes 2 arrays of 10 integers each, a and b. c is an array with 20 integers. 
//The program should put into c the appending of b to a, the first 10 integers of c from array a, the latter 10 from b. 
//Then the program should display c.

#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int a[size], b[size], c[size * 2];

    // Input array 'a'
    cout << "Enter " << size << " integers for array 'a':" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> a[i];
    }

    // Input array 'b'
    cout << "Enter " << size << " integers for array 'b':" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> b[i];
    }

    // Append 'b' to 'a' to create array 'c'
    for (int i = 0; i < size; ++i) {
        c[i] = a[i];
        c[i + size] = b[i];
    }

    // Display array 'c'
    cout << "Array 'c' (appended array):" << endl;
    for (int i = 0; i < size * 2; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}








