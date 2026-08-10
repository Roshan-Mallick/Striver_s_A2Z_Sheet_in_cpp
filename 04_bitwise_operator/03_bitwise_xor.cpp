// ^ → Bitwise XOR: operates on the individual bits of integer values.

#include<iostream>

using namespace std;

int main () {

  int num ;
  cout << "Enter number : ";
  cin >> num ;
  
  int result = num ^ 1;
  
  // ^ → Bitwise XOR: returns 1 when the corresponding bits are different.
  // num ^ 1 flips the last bit:
  // Even number → last bit 0 → changes to 1 → effectively +1.
  // Odd number  → last bit 1 → changes to 0 → effectively -1.
  
  cout << "Result = " << result << endl ;

  return 0;
}
