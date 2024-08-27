// 6.	WAP for finding sum of all even numbers till 20.

#include <iostream>

using namespace std;

int main() {
    int sum =0;
    //Iterate from 2 to 20
for (int i = 2; i < 20; i+2) {
    sum+=i;
}
cout << "The Sum of all even number from 2 to 20 is" << sum <<endl;

return 0;
}