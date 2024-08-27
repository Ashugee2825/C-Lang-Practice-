
//9. Write a program to convert a string in lowercase.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        str[i] = tolower(str[i]);
    }

    cout << "String in lowercase: " << str << endl;
    return 0;
}
