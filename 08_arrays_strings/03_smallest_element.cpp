#include<iostream>
using namespace std;


int main () {

  int size ;
  cout << "Enter size of the array : ";
  cin  >> size ;
  
  int arr[size];
  cout << "Enter elements in the array : ";
  for (int i = 0 ; i < size ; i++ ){
     cin  >> arr[i];
  } 
  
  int smallest = arr[0];
  
  for (int i = 1 ; i < size ; i++ ){
      if (arr[i] < smallest) {
            smallest = arr[i];
      }
  }
  
  cout << "smallest : " << smallest << endl ;
  
   


 return 0;
}
