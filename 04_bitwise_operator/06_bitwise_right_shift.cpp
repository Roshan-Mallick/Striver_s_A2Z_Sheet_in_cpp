#include<iostream>

using namespace std;

int main () {

  int num ;
  cout << "Enter Number : ";
  cin >> num;
  
  int result = num >> 1;
  // >> → Right Shift: moves the bits of an integer to the right.
  // Shifting right by 1 position is equivalent to dividing by 2.
  
  cout << "Result is = " << result <<endl;


  return 0;
}
