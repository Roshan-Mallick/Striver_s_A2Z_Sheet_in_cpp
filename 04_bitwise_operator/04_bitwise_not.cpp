// ~ → Bitwise NOT: operates on the individual bits of an integer and flips each bit.

#include<iostream>

using namespace std;

int main  () {

  int num ;
  cout << "Enter num : ";
  cin >> num ;
  
  int result = ~num ;
  // ~ → Bitwise NOT: flips every bit.
  // 0 becomes 1 and 1 becomes 0.
  // For signed integers using two's complement:
  // ~num = -(num + 1)
  // Example: ~5 = -(5 + 1) = -6.
  
  cout << "Result is : " << result << endl;


  return 0;
}
