// & → Bitwise AND: operates on the individual bits of integer values.

#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Enter number: ";
    cin >> num;

    if (num & 1) {
        // Suppose num = 5, which is 0101 in binary.
        // 1 is 0001 in binary.
        // 0101 & 0001 = 0001
        // The last bit is 1, so the number is odd.
        cout << "Odd" << endl;
    } 
    else {
        // Suppose num = 4:
        // 0100 & 0001 = 0000
        // The last bit is 0, so the number is even.
        cout << "Even" << endl;
    }

    return 0;
}
