//7. Write a program to find a substring within a string. 
//If found display its starting position.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], substr[100];
    cout << "Enter the main string: ";
    cin.getline(str, 100);
    cout << "Enter the substring to find: ";
    cin.getline(substr, 100);

    char *ptr = strstr(str, substr);
    if (ptr != NULL) {
        cout << "Substring found at position: " << (ptr - str) << endl;
    } else {
        cout << "Substring not found in the main string." << endl;
    }

    return 0;
}


