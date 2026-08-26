#include<iostream>
#include<string>

using namespace std;

int main () {

 string text;
 cout << "Enter a text : ";
 cin >> text ;
 
 cout << "Text : "<< text << endl ;
 
 cout << "Reverse : ";
 for (int i = text.length() - 1 ; i >= 0 ; i--){
     cout << text[i];
     
 }
 
 cout << endl ;


 return 0;
}
