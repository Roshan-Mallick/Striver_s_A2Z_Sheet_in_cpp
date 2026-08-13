#include<iostream>

using namespace std;

int main () {

  int num , sum = 0 ;
  cout << "Enter num : ";
  cin >> num;
  
  for (int i = 1 ; i <= num ; i++){
      cout << i << " + " << sum << " = " << sum+i << endl; 
      sum = sum + i;
  }
 

 return 0;
 
}
