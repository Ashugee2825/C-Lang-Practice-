//1. Write a program to find the length of string.
#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    cout << "Length of the string: " << length << endl;
    return 0;
}



