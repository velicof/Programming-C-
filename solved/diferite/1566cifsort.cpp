#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
    long long n,u,u1,S=0,p=1;
    
    cin >> n;
    
    while ( n !=0 ){
        u = n % 100;
        u1 = (u%10)*10 + u/10;
        S= S + u1 * p;
        p = p * 100;
        n = n / 100;
    }
    cout << S;
     
    
    
   
return 0;
}