#include<iostream>

using namespace std;

int main  () {

  int a = 10 ;
  int b = 40 ;
  int c = 30 ;
  
  
   if (a > b && a > c) {
   
    cout << "a is the greatest among a, b, and c" << endl;
    
   } else if (b > a && b > c) {
   
    cout << "b is the greatest among a, b, and c" << endl;
   
   } else {
   
    cout << "c is the greatest among a, b, and c" << endl;
    
    }




  return 0;
}
