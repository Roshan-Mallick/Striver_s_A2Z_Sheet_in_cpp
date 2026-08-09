#include <iostream>
using namespace std;

int main() {

    int a = 10;

    cout << "Initial value of a : " << a << endl;

    a += 5; // a = a + 5 = 15
    cout << "After += 5 : " << a << endl;

    a -= 5; // a = a - 5 = 10
    cout << "After -= 5 : " << a << endl;

    a *= 5; // a = a * 5 = 50
    cout << "After *= 5 : " << a << endl;

    a /= 4; // a = a / 4 = 12
    cout << "After /= 4 : " << a << endl;

    a %= 3; // a = a % 3 = 0
    cout << "After %= 3 : " << a << endl;

    return 0;
}
