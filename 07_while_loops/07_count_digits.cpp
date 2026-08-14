#include<iostream>

using namespace std;

int main () {

 int num;
 cout << "Enter Number : ";
 cin >> num;
 
 int count = 0;
 
 while ( num != 0 ){
    
    num = num / 10 ;
    count++ ;
     
 }


  cout << count << " Digit Number "<< endl;

  return 0;
}
