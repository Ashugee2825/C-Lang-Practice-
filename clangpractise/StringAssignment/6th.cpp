//6. Write a program to check a string is palindrome or not.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = strlen(str);
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "String is a palindrome." << endl;
    } else {
        cout << "String is not a palindrome." << endl;
    }

    return 0;
}

