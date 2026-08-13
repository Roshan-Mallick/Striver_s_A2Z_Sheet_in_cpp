#include<iostream>
using namespace std;

int main () {

  int choice;
  cout << "Enter choice to know dates in months : " << endl;
  cout << "Enter 1 for January "<< endl ;
  cout << "Enter 2 for February "<< endl ;
  cout << "Enter 3 for March "<< endl ;
  cout << "Enter 4 for April "<< endl ;
  cout << "Enter 5 for May "<< endl ;
  cout << "Enter 6 for June"<< endl ;
  cout << "Enter 7 for July"<< endl ;
  cout << "Enter 8 for August"<< endl ;
  cout << "Enter 9 for September"<< endl ;
  cout << "Enter 10 for October "<< endl ;
  cout << "Enter 11 for November "<< endl ;
  cout << "Enter 12 for December "<< endl ;
  cout << "Enter choice : ";
  cin >> choice ;
  
  switch (choice) {
   
   case 1 : case 3 : case 5 : case 7 :  case 8 : case 10 : case 12 : cout << " 31 Days " << endl ; break ;
   case 4 : case 6 : case 9 : case  11 : cout << "30 days" << endl;
   case 2 : cout << "28 days" << endl ; break;
   default : cout << "Invalid month" << endl ;
   
  }




  return 0;
}
