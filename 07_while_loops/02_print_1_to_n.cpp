#include <iostream>

using namespace std;

int main() {

    int num;
    int start = 1;

    cout << "Enter Number : ";
    cin >> num;

    cout << "Printing 1 to nth term : " << endl;

    while (start <= num) {
        cout << start++ << endl;
    }

    return 0;
}
