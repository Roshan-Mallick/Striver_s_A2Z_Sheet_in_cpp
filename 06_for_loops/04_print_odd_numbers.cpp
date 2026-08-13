#include<iostream>

using namespace std;

int main  () {

int num ;
cout << "Enter num : ";
cin >> num;

for (int i = 1 ;  i <= num ; i++) {


     if (i % 2 != 0 ){
        cout << i << endl;
     }
}


  return 0;
}
