// 2.	WAP for printing all natural numbers in reverse order starting from 20.
#include <iostream>

using namespace std;

int main() {
    // Iterate from 20 down to 1 and print each number
    for (int i = 20; i >= 1; --i) {
        cout << i << " ";
    }
    cout << endl; // Move to the next line after printing all numbers

    return 0;
}
