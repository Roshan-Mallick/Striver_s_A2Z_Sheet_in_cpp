#include<iostream>

using namespace std;

int main  () {
 
  int marks ;
  cout << "Enter your marks from 0 to 100: ";
  cin >> marks ;
  
  if ( marks >= 0 && marks <= 100) {
     if (marks >= 90) cout << "A+ Grade" << endl ;
     else if ( marks >= 75) cout << "A Grade" << endl ;
     else if ( marks >= 60) cout << "B Grade" << endl ;
     else if ( marks >= 45) cout << "C Grade" << endl ;
     else cout << "Failed" << endl;
  } else {
     cout << "You have entered invalid marks." << endl;
  }



  return 0;
}
