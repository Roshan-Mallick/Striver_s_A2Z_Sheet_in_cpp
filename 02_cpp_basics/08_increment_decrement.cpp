#include<iostream>
using namespace std;

int main () {

  int a = 10;
  
  cout << "Initial value of a : " << a << endl;
  cout << "Post-Increment of a : " << a++ << endl;
  cout << "After Post-Increment of a : " << a << endl;
  cout << "\n";
  
  int b = 20 ;
  
  cout << "Initial value of b : " << b << endl;
  cout << "Pre-Increment of b : " << ++b << endl;
  
  cout << "\n";
  
  int c = 30;
  
  cout << "Initial value of c  : " << c << endl;
  cout << "Post-Decrement of c : " << c-- << endl;
  cout << "After Post-Decrement of c : " << c << endl;
  
  cout << "\n";
  
  int d = 40 ;
  
  cout << "Initial value of d : " << d << endl;
  cout << "Pre-Decrement of d : " << --d << endl;


  return 0;
}
