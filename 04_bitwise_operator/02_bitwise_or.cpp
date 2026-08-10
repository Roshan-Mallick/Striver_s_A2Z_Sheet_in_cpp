// | → Bitwise OR: operates on the individual bits of integer values.

#include<iostream>

using namespace std;

int main  () {
 
  int num ;
  
  cout << "Enter Number : ";
  cin >> num ;
  
  int result = num | 1 ;
  // | → Bitwise OR: operates on individual bits.
  // num | 1:
  // If num is even, its last bit is 0, so OR with 1 changes it to 1 (effectively +1).
  // If num is odd, its last bit is already 1, so OR with 1 keeps the number unchanged.
  
  cout << "Number with bitwise Or with 1 : " << result << endl ; 



 return 0;
}
