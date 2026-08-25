#include <iostream>
using namespace std;

int main() {

    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size]; // Array declaration with the specified size

    cout << "Enter the array elements: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array elements with their index values:" << endl;

    for (int i = 0; i < size; i++) {
        cout << "At index " << i << ", the value is " << arr[i] << endl;
    }

    return 0;
}
