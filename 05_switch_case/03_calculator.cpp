#include<iostream>

using namespace std;

int main () {

int choice;
cout << "Calculator Options with two operands"<<endl;
cout << "1 for addition" << endl ;
cout << "2 for subtractition" << endl;
cout << "3 for Multiplication" << endl ;
cout << "4 for coefficient_division" << endl ;
cout << "5 for Reminder_division" << endl ;
cout << "Enter choice : ";
cin >> choice ;

int a , b ;

switch (choice) {
  
  case 1 : cout << "Enter a : " ; cin >> a ;
           cout << "Enter b : " ; cin >> b ;
           cout << "a + b = " << a + b  << endl ;
           break;
  case 2 : cout << "Enter a : " ; cin >> a ;
           cout << "Enter b : " ; cin >> b ;
           cout << "a - b = " << a - b  << endl ;
           break;
  case 3 : cout << "Enter a : " ; cin >> a ;
           cout << "Enter b : " ; cin >> b ;
           cout << "a * b = " << a * b  << endl ;
           break;
  case 4 : cout << "Enter a : " ; cin >> a ;
           cout << "Enter b : " ; cin >> b ;
           if ( b == 0){
             cout << "Division by zero is not allowed" << endl ;
           } else {
             cout << "a / b = " << a / b  << endl ;
           }
           break;
  case 5 : cout << "Enter a : " ; cin >> a ;
           cout << "Enter b : " ; cin >> b ;
           if ( b == 0){
             cout << "Division by zero is not allowed" << endl ;
           } else {
             cout << "a % b = " << a % b  << endl ;
           }
           break;
  default : cout << "Invalid choice"<<endl;

}




 return 0 ;
}
