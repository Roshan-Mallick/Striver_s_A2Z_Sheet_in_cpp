#include<iostream>

using namespace std;

int main () {

int choice;
cout << "Enter a number between (1-3) : ";
cin >> choice ;

switch (choice) {
   
   case 1 : cout << "You have selected One" << endl; break ;
   case 2 : cout << "You have selected Two" << endl ; break ;
   case 3 : cout << "You have selected Three" << endl ; break;
   default : cout << "Invalid choice" << endl ;
           

}
  return 0;
}
