#include<iostream>
using namespace std;

int main () {

  int id = 1177;  // value can be modify or update
  const int pid = 1188; // constants
  
  cout << "int id : "<< id <<endl ;
  cout << "const id : "<< pid << endl;
  
  id = 1100;
  //pid = 2100;
  
  cout << "int id : "<< id <<endl ;
  cout << "const id : "<< pid << endl;



  return 0;
}
