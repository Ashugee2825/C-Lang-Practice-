//128.	WAP for printing multiplication table of a number. 
//For eg. Display should be “ 2 X 1 = 2”
#include <iostream>

using namespace std;

// Function to print the multiplication table of a given number
void printMultiplicationTable(int number) {
    cout << "Multiplication table of " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;
    printMultiplicationTable(num);
    return 0;
}
