#include<iostream>

using namespace std;

int main  () {
 
 int a = 10 ;
 int b = 20 ;
 
 cout << "(a < b && a == 10) : " << ( a < b && a == 10 ) << endl;
 cout << "(a > b || b == 20) : " << (a > b || b == 20 ) << endl;
 cout << "!(a==b) : " << !(a==b) <<endl ;
 cout << "!(a<=b) : " << !(a<=b) <<endl ;
 


 return 0;
}
