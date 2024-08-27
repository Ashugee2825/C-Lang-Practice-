
 //2. Write a program to display string from backward.

#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "String in reverse: ";
    char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    ptr--; // Move back one position to avoid the null terminator
    while (ptr >= str) {
        cout << *ptr;
        ptr--;
    }
    cout << endl;

    return 0;
}



