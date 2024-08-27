//2. Write a program to display string from backward.

#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    cout << "String in reverse: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}






