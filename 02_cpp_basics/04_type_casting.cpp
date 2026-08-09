#include<iostream>
using namespace std;

int main  () {


   int num = 10 ;
   
   double Decimal_Number = num ; //// Implicit type casting → C++ does it automatically → convenient
  

   
   cout << "Integer : "<< num <<endl;
   cout << "Double  : "<< Decimal_Number << endl;  
   
   double value = 10.75 ;
   int converted_value = static_cast <int> (value); //// Explicit type casting → You explicitly request the conversion → clearer control over what happens
   
   cout << "Original value  : " << value << endl;
   cout << "Converted Value : "<< converted_value <<endl ;
   


  return 0;
}
