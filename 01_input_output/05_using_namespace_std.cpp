#include<iostream>

using namespace std; // Writing using namespace std; removes the need to prefix std::. This makes code cleaner but can cause naming conflicts in large projects.

int main  () {

  char first_name[20];
  cout << "Enter you first name : " ;
  cin >> first_name ;
  char last_name[20];
  cout << "Enter you last name  : " ;
  cin >> last_name;
  
  long int id;
  cout<<"Enter you Collage id : ";
  cin >> id ;
  
  int sem;
  cout <<"Enter current semester : ";
  cin >> sem;
  
  cout << "\n";
  
  cout << "<---Student Details--->"<<endl;
  cout << "Full name : " << first_name <<" "<< last_name << endl;
  cout << "ID        : " << id << endl;
  cout << "Semester  : " << sem << endl;
  
  cout << "\n";

 return 0;
}
