#include <iostream>

using namespace std;

int main() {

    int num;
    cout << "Enter value of N: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
