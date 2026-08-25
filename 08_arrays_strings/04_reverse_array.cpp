

#include<iostream>
using namespace std;

int main () {

  int size ;
  cout << "Enter the size of the array : ";
  cin >> size ;
  
  int arr[size];
  cout << "Enter elements in the array : ";
  for (int i = 0 ; i < size ; i++){
     cin >> arr[i];
  } 
  
  cout << "reverse array : ";
  for (int i = size - 1 ; i >= 0 ; i--){
     cout << " "<< arr[i];
  }
  
  cout << endl;


 return 0 ;
}
