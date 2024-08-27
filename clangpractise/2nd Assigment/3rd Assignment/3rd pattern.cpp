
/*
       
       *
      ***
     *****
    *******
   *********

*/




#include <iostream>

using namespace std;

int main() {
    int rows;

    // Input the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for spaces
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        // Inner loop for asterisks
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

