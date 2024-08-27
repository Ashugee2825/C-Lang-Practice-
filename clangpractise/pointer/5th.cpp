


// 5.	Write a program to compare two strings they are exact equal or not.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter the first string: ";
    cin.getline(str1, 100);
    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    if (strcmp(str1, str2) == 0) {
        cout << "Both strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}



