#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
    long long n;
    
    cin >> n;
    
    while ( n >=100 ){
      n = n /10;
    }
    cout << (n / 10)*(n%10);
     
    
    
   
return 0;
}