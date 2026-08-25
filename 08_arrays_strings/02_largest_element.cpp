#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements in the array: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The largest element in the array: ";

    // Method: Linear Traversal to Find the Largest Element
    int largest = arr[0];

    for (int i = 1; i < size; i++) {

        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << largest << endl;

    return 0;
}
