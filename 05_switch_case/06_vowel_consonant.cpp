#include<iostream>

using namespace std;

int main () {

   cout << "========================" << endl;
   cout << "   VOWEL / CONSONANT    " << endl;
   cout << "========================" << endl;
   
      char choice;
      cout << "Enter a character: ";
      cin >> choice;

    switch (choice) {
      
      
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cout << "Vowel" << endl;
        break;
        
        default:
        if ((choice >= 'a' && choice <= 'z') || (choice >= 'A' && choice <= 'Z')) {
        cout << "It is a Consonant." << endl;
        }
        else {
        cout << "Invalid character." << endl;
        }
        break;
    
 }

  return 0;
}

