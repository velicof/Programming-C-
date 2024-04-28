#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
    long long n;
    
    cin >> n;
    
    while ( n % 10 == 0 ){
            n = n / 10;
    }
    cout << n;
    
    
   
return 0;
}