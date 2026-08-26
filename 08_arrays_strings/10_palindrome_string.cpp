#include<iostream>
using namespace std;

int main () {
 
   int size;
   cout << "Enter size of the array : ";
   cin >> size;
   
   char str[size];
   cout << "Enter array elements : ";
   for ( int i = 0 ; i < size ; i++){
      cin >> str[i] ;
   } 
   
   for (int i = 0 ; i < size / 2 ; i++){
      if (str[i] != str[size - 1 - i]) {
       cout << "Not palindrome " << endl ;
       return 0 ;
      }
      
   }
   
   cout << "it is a palindorme " << endl ;
   
   
   

  return 0;
}

