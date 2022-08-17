/*Write a C++ program that take a number from user then output the
power of this number.
*/

#include <bits/stdc++.h>
using namespace std;
  
int main(){
    int base, exp, i, result = 1;
     
 cout << "Enter base and exponent\n";
    cin >> base >> exp;
     
    for(i = 0; i < exp; i++){
        result = result * base;
    }
      
    cout << base << "^" << exp << " = " << result;
     
    return 0;
}