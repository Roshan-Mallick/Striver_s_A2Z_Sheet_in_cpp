#include<iostream>

using namespace std;

int main  () {

 int start = 1;
 int num;
 cout << "Enter number : ";
 cin >>  num ;
 
 while (start <= num ){
     if (start % 2 == 0){
         cout << start << endl; 
     }
     start++;
 }
 

  return 0;
}
