#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
    long long n,cif,u,max=-1e9;
    
    cin >> n;
    u = n % 1000;
    n =  n/10;
    while ( n != 0){
        cif = n%1000;
        if (cif >=u && max<cif){
            max = cif;
        }
        n = n/10;
    }
    if (max == -1e9){
        cout << u;
    }else{
        cout << max;
    }
    
    
   
return 0;
}