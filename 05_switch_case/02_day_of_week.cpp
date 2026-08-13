#include<iostream>

using namespace std;

int main () {

   int choice;
   cout << "Enter day (1-7) : ";
   cin >> choice ;
   
   switch (choice){
   
    case 1 : cout << "Monday" << endl ; break;
    case 2 : cout << "Tuesday" << endl ; break ;
    case 3 : cout << "Wednesday" << endl ; break ;
    case 4 : cout << "Thurshday" << endl ; break ;
    case 5 : cout << "Friday" << endl ; break ;
    case 6 : cout << "Saturday" << endl ; break;
    case 7 : cout << "Sunday" << endl ; break ;
    default : cout << "Invalid choice" << endl ; break ;
   
   }
  

  return 0;
}
