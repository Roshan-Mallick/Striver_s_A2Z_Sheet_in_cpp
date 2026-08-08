#include<iostream>

int main () {

  int x ;
  float y;
  double z; // Stores decimal values; very large values may be displayed in scientific notation
  char grade;
  bool value; // Stores true or false; 0 is false, non-zero is true
  
  std::cout << "Enter int x : ";
  std::cin >> x ;
  std::cout << "Enter float y : ";
  std::cin >> y ;
  std::cout << "Enter double z : ";
  std::cin >> z ;
  std::cout << "Enter char grade : ";
  std::cin >> grade ;
  std::cout << "Enter bool vlaue 0 or 1 : ";
  std::cin >> value;
  
  
  std::cout<< "x : " << x <<"\n" ;
  std::cout<< "y : " << y <<"\n" ;
  std::cout<< "z : " << z <<"\n" ;
  std::cout<< "grade : " << grade <<"\n" ;
  std::cout<< "value : " << value <<"\n" ;
  
  

  return 0;
}
