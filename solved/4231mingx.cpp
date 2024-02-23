#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;


int main (){
    
   long long n,min=10;
   int x,u;
   
   cin >> n >> x;
   
   while ( n != 0){
       u = n % 10;
       if (u > x && u < min){
           min = u;
       }
       n/=10;
   }
   if ( min == 10){
       cout << "-1";
   }else
   cout << min;
   

return 0;
}