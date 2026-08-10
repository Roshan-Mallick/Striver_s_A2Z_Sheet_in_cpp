#include<iostream>

using namespace std;

int main (){

  int num ;
  
  cout << "Enter number : ";
  cin >> num ;
  
  
  int result = num << 1;
  // << → Left Shift: moves the bits of an integer to the left.
  // Shifting left by 1 position is equivalent to multiplying by 2.
  
  cout << "Result is = " << result << endl;

 return 0;
}
