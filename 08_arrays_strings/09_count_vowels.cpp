#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter size of the string: ";
    cin >> size;

    char text[size];

    cout << "Enter string: ";

    for (int i = 0; i < size; i++) {
        cin >> text[i];
    }

    int vowels = 0;

    for (int i = 0; i < size; i++) {

        if (text[i] == 'a' || text[i] == 'A' ||
            text[i] == 'e' || text[i] == 'E' ||
            text[i] == 'i' || text[i] == 'I' ||
            text[i] == 'o' || text[i] == 'O' ||
            text[i] == 'u' || text[i] == 'U') {

            vowels++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;

    return 0;
}
