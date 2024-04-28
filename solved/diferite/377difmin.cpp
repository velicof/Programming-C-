#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
long long a=0,b=0,aa=0,bb=0,n,min = 1e9;

cin >> n;

for ( int i = 1 ; i*i <= n ; i++){
    if (n % i == 0){
        a = i;
        b = n / i;
            if (min > (b-a)){
                min = (b - a);
                aa=a;
                bb=b;
            }

         
    }
   
}
cout<< aa <<" "<< bb;
return 0;
}