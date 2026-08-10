#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Enter a number to check whether it is positive or negative: ";
    cin >> num;

    if (num == 0) {
        cout << "You have entered 0, which is neither positive nor negative." << endl;
    }
    else if (num > 0) {
        cout << "You have entered " << num << ", which is a positive number." << endl;
    }
    else {
        cout << "You have entered " << num << ", which is a negative number." << endl;
    }

    return 0;
}
