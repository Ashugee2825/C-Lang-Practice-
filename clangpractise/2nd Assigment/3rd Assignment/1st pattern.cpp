/*     

// WAP to print following kind of patterns: 

*
**
***
****
*****

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
        // Inner loop for columns
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
    





