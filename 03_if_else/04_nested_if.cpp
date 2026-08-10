#include<iostream>

using namespace std;

int main () {

   int a = 2;
   int b = -2;
   
   if ( a > 0) {
       if (a > b) {
         cout << "a is positive integer and greater than b" << endl;
       } 
   } else {
       if (b < 0) {
          cout << "b is a negative integer and smaller than a" << endl;
       }
   }



  return 0;
}
