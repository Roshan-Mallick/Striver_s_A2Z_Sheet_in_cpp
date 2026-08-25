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
  
  int sum = 0  ;
  
  for (int i = 0 ; i < size ; i++){
  
  sum = sum + arr[i];
     
  }
  
  cout << sum << endl ;
 

 return 0;
}
