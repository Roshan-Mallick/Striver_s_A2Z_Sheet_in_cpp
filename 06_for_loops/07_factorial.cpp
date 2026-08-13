#include<iostream>

using namespace std ;

int main () {

int num;
cout << "Enter number : ";
cin >> num ;

long long int fact = 1;

for ( int i = 1 ; i <= num ; i++ ){
    
    cout << fact << " x " << i << " = " << fact * i << endl;
    fact = fact * i ;
}




 return 0;
 
}
