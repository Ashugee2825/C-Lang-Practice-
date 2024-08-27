
//3.	Write a program to count number of words in string.

#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int count = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr == ' ') {
            count++;
        }
        ptr++;
    }

    cout << "Number of words in the string: " << count + 1 << endl;
    return 0;
}



