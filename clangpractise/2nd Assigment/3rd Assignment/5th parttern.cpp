

*/

/*
ABCD
ABC
AB
A


*/

#include <iostream>

using namespace std;

int main() {
    int rows;

    // Input the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = rows; i >= 1; --i) {
        // Inner loop for characters
        for (int j = 1; j <= i; ++j) {
            char ch = 'A' + j - 1;
            cout << ch;
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

