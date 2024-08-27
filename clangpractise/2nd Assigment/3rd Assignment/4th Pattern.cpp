

/* 

*********
**** ****
***   ***
**     **
*       *


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
        // Inner loop for asterisks
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Inner loop for spaces
        for (int k = 1; k <= 2 * (rows - i); ++k) {
            cout << " ";
        }
        // Inner loop for asterisks (right side)
        for (int l = 1; l <= i; ++l) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

