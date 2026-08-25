#include<iostream>
using namespace std;

int main () {
  
   int size ;
  cout << "Enter size of the array : ";
  cin >> size;
  
  int arr[size];
  cout << "Enter elements in the array : ";
 
  for (int i = 0 ; i < size ; i++){
  
  cin >> arr[i];
     
  }
  
  int even = 0 , odd = 0 ;
  
  for ( int i = 0 ; i  < size ; i++){
     
     if (arr[i]%2 == 0) even += 1; // even = even + 1
     else odd += 1;
  }
  
  cout << "Even numbers are : " << even << endl;
  cout << "Odd numbers are : " << odd << endl;


  return 0;
}
