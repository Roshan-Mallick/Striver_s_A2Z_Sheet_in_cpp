#include<iostream>

using namespace std;

int main () {

int i = 1 , sum = 0 ;

int num ;
cout << "Enter number = ";
cin >> num ;

while ( i <= num ) {
     
     sum = sum + i ;
     cout << sum << endl;
     i++;
}

 return 0 ;
}
