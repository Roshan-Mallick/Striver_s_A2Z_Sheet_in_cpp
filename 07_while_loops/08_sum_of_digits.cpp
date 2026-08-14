#include<iostream>

using namespace std;

int main () {

int num = 343;

int sum = 0;

while ( num != 0)  {

   sum = sum +  ( num % 10 ); 
   num = num / 10 ;
   
}

cout << sum << endl ;

 return 0 ;
}
