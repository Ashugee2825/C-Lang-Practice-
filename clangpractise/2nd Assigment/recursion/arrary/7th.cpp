// 7.	Write a program to handle the command line arguments entered by the user.
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    // Display the number of command line arguments
    cout << "Number of command line arguments: " << argc << endl;

    // Display each command line argument
    cout << "Command line arguments:" << endl;
    for (int i = 0; i < argc; ++i) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    return 0;
}
