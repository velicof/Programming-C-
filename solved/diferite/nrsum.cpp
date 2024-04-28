#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;


int main (){
    
   long long n,S=0;
   int nr=0,u;
   
   cin >> n ;
   
   while ( n != 0){
       u = n % 10;
       S = S + u;
       n = n / 10;
   }
   if (S == 0){
       nr = 1;
   }else{
       while (S != 0){
           S = S / 10;
           nr++;
       }
   }
   cout<<nr;
   

return 0;
}