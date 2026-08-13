#include <iostream>

using namespace std;

int main() {

    int table_of;
    cout << "Enter table of: ";
    cin >> table_of;

    int table_upto;
    cout << "Enter table upto: ";
    cin >> table_upto;

    for (int i = 1; i <= table_upto; i++) {
        cout << table_of << " x " << i << " = " << (table_of * i) << endl;
    }

    return 0;
}
