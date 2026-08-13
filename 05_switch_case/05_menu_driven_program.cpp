#include<iostream>

using namespace std;

int main () {
cout << "========================" << endl;
cout << "     BIRIYANI MENU      " << endl;
cout << "========================" << endl;
cout << "  1. Chicken Biriyani   " << endl;
cout << "  2. Mutton Biriyani    " << endl;
cout << "  3. Veg Biriyani       " << endl;
cout << "========================" << endl;

  int choice ;
  cout << "Enter your choice: ";
  cin >> choice ;
  
switch (choice) {
    case 1:
        cout << "Chicken biriyani" << endl;
        break;

    case 2:
        cout << "Mutton biriyani" << endl;
        break;

    case 3:
        cout << "Veg biriyani" << endl;
        break;

    default:
        cout << "Invalid choice" << endl;
        break;
}

  return 0;
}



