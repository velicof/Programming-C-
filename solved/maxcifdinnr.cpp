#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
    long long n,u,max=-1e9;
    
    cin >> n;
    
    while ( n !=0 ){
          u = n % 10;
          if ( u > max){
              max = u;
          }
          n=n/10;
    }
    if (max == -1e9){
        cout <<"0";
    }else
    cout << max;
    
    
   
return 0;
}