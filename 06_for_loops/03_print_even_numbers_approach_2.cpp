#include<iostream>

using namespace std;

int main () {
   
  int num;
  cout << "Enter num : ";
  cin >> num ;

  for ( int i = 2 ; i <= num ; i += 2){   // i += 2 means i = i + 2
     cout << i << endl ;
  }
 
 return 0;
}
